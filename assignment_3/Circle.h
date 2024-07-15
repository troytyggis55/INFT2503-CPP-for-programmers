//
// Created by Trygve Jørgensen on 07.07.2024.
//

#ifndef ASSIGNMENT_3_CIRCLE_H
#define ASSIGNMENT_3_CIRCLE_H


class Circle {
    public:
        Circle(double radius_);
        double get_area() const;
        double get_circumference() const;
    private:
        double radius = 0.0;
};

#endif //ASSIGNMENT_3_CIRCLE_H
