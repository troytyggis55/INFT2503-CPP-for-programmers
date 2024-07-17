#include <iostream>
#include <memory>
#include <string>
#include <vector>

using namespace std;

class ChessBoard {
public:
    enum class Color { WHITE,
        BLACK };

    class Piece {
    public:
        Piece(Color color) : color(color) {}
        virtual ~Piece() {}

        Color color;
        string color_string() const {
            if (color == Color::WHITE)
                return "white";
            else
                return "black";
        }

        /// Return color and type of the chess piece
        virtual string type() const = 0;

        /// Returns true if the given chess piece move is valid
        virtual bool valid_move(int from_x, int from_y, int to_x, int to_y) const = 0;

        virtual string print_piece() const = 0;
    };

    class King : public Piece {
        public:
        King(Color color) : Piece(color) {}

        string type() const override {
            return color_string() + " king";
        }

        bool valid_move(int from_x, int from_y, int to_x, int to_y) const override {
            if (from_x < 0 || from_x > 7 || from_y < 0 || from_y > 7 || to_x < 0 || to_x > 7 || to_y < 0 || to_y > 7) {
                return false;
            }

            int move_x = abs(from_x - to_x);
            int move_y = abs(from_y - to_y);
            int move_sum = move_x + move_y;

            return move_sum > 0 && move_x < 2 && move_y < 2;
        }

        string print_piece() const override {
            if (this->color == Color::WHITE) {
                return "\033[1;37m K ";
            } else {
                return "\033[1;30m K ";
            }
        }
    };

    class Knight : public Piece {
        public:
        Knight(Color color) : Piece(color) {}

        string type() const override {
            return color_string() + " knight";
        }

        bool valid_move(int from_x, int from_y, int to_x, int to_y) const override {
            if (from_x < 0 || from_x > 7 || from_y < 0 || from_y > 7 || to_x < 0 || to_x > 7 || to_y < 0 || to_y > 7) {
                return false;
            }

            int move_x = abs(from_x - to_x);
            int move_y = abs(from_y - to_y);
            int move_sum = move_x + move_y;

            return move_sum == 3 && move_x < 3 && move_y < 3;
        }

        string print_piece() const override {
            if (this->color == Color::WHITE) {
                return "\033[1;37m h ";
            } else {
                return "\033[1;30m h ";
            }
        }
    };

    ChessBoard() {
        // Initialize the squares stored in 8 columns and 8 rows:
        squares.resize(8);
        for (auto &square_column : squares)
            square_column.resize(8);
    }

    /// 8x8 squares occupied by 1 or 0 chess pieces
    vector<vector<unique_ptr<Piece>>> squares;

    /// Move a chess piece if it is a valid move.
    /// Does not test for check or checkmate.
    bool move_piece(const string &from, const string &to) {
        int from_x = from[0] - 'a';
        int from_y = stoi(string() + from[1]) - 1;
        int to_x = to[0] - 'a';
        int to_y = stoi(string() + to[1]) - 1;

        auto &piece_from = squares[from_x][from_y];
        if (piece_from) {
            if (piece_from->valid_move(from_x, from_y, to_x, to_y)) {
                cout << piece_from->type() << " is moving from " << from << " to " << to << endl;
                auto &piece_to = squares[to_x][to_y];
                if (piece_to) {
                    if (piece_from->color != piece_to->color) {
                        cout << piece_to->type() << " is being removed from " << to << endl;
                        if (auto king = dynamic_cast<King *>(piece_to.get()))
                            cout << king->color_string() << " lost the game" << endl;
                    } else {
                        // piece in the from square has the same color as the piece in the to square
                        cout << "can not move " << piece_from->type() << " from " << from << " to " << to << endl;
                        return false;
                    }
                }
                piece_to = std::move(piece_from);
                return true;
            } else {
                cout << "can not move " << piece_from->type() << " from " << from << " to " << to << endl;
                return false;
            }
        } else {
            cout << "no piece at " << from << endl;
            return false;
        }
    }


    void print_board() {
        // ANSI escape codes for colors
        const string black_square("\033[0;40m");
        const string white_square("\033[1;47m");

        const string empty("   ");

        const string line(3 * 8 , '-');
        const string reset("\033[0;40m");

        cout << "+" << line << "+" << endl;

        string square;
        string piece;

        for (int y = 7; y >= 0; --y) {
            cout << "|";
            for (int x = 0; x < 8; ++x) {
                square = ((x + y) % 2 != 0) ? white_square : black_square;

                if (auto &current_piece = squares[x][y]) {
                    piece = current_piece->print_piece();
                } else {
                    piece = empty;
                }

                cout << square << piece;

                //cout << x << " " << y << "\t";
            }
            cout << reset << "|" << endl;
        }
        cout << "+" << line << "+" << endl;
    }
};

int main() {
    ChessBoard board;

    board.squares[4][0] = make_unique<ChessBoard::King>(ChessBoard::Color::WHITE);
    board.squares[1][0] = make_unique<ChessBoard::Knight>(ChessBoard::Color::WHITE);
    board.squares[6][0] = make_unique<ChessBoard::Knight>(ChessBoard::Color::WHITE);

    board.squares[4][7] = make_unique<ChessBoard::King>(ChessBoard::Color::BLACK);
    board.squares[1][7] = make_unique<ChessBoard::Knight>(ChessBoard::Color::BLACK);
    board.squares[6][7] = make_unique<ChessBoard::Knight>(ChessBoard::Color::BLACK);

    cout << "Invalid moves:" << endl;
    board.move_piece("e3", "e2");
    board.move_piece("e1", "e3");
    board.move_piece("b1", "b2");
    cout << endl;

    cout << "A simulated game:" << endl;

    board.print_board();
    board.move_piece("e1", "e2");
    board.print_board();
    board.move_piece("g8", "h6");
    board.print_board();
    board.move_piece("b1", "c3");
    board.print_board();
    board.move_piece("h6", "g8");
    board.print_board();
    board.move_piece("c3", "d5");
    board.print_board();
    board.move_piece("g8", "h6");
    board.print_board();
    board.move_piece("d5", "f6");
    board.print_board();
    board.move_piece("h6", "g8");
    board.print_board();
    board.move_piece("f6", "e8");
    board.print_board();
}