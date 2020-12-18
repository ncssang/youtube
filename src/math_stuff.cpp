#include <iostream>

struct Rectangle
{
    float lenght;
    float width;
};

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

float pow(float base, int pow = 2)
{
    int total = 1;
    for (int i = 0; i < pow; ++i)
    {
        total *= base;
    }
    return total;
}

int main()
{
    std::cout << pow(3, 3) << std::endl;
    std::cout << pow(3) << std::endl;

    Rectangle rectangle;
    rectangle.lenght = 10;
    rectangle.width = 10;

    std::cout << area(rectangle.lenght, rectangle.width) << std::endl;
    std::cout << area(rectangle.lenght) << std::endl;
    std::cout << area(rectangle) << std::endl;

    return 0;
}