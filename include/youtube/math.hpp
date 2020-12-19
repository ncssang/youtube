#ifndef MATH_HPP
#define MATH_HPP

#include <iostream>

struct Rectangle
{
    float lenght;
    float width;
};

float area(float length, float width);
float area(float length);
float area(Rectangle rectangle);
float pow(float base, int pow);

#endif //MATH_HPP