//
// Created by Павел Ятрушев on 10/3/24.
//
#pragma once


struct Vec2d
{
    double x{0.};
    double y{0.};
    Vec2d() = default;
    Vec2d(double x_, double y_) : x{x_}, y{y_} {}
    Vec2d& operator+= (const Vec2d& rhs);
    Vec2d& operator-= (const Vec2d& rhs);
    Vec2d& operator*= (double rhs);
    Vec2d& operator/= (double rhs);

};

Vec2d operator+ (const Vec2d& lhs, const Vec2d& rhs);
Vec2d operator- (const Vec2d& lhs, const Vec2d& rhs);
Vec2d operator* (const Vec2d& lhs, double rhs);
Vec2d operator/ (const Vec2d& lhs, double rhs);
Vec2d operator* (double lhs, const Vec2d& rhs);
Vec2d operator/ (double lhs, const Vec2d& rhs);


double length (const Vec2d& v);
