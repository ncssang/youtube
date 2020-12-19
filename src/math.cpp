#include "youtube/math.hpp"

float area(float length, float width)
{
    return length * width;
}

float area(float length)
{
    return length * length;
}

float area(Rectangle rectangle)
{
    return rectangle.lenght * rectangle.width;
}

float pow(float base, int pow)
{
    int total = 1;
    for (int i = 0; i < pow; ++i)
    {
        total *= base;
    }
    return total;
}