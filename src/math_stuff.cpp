#include "youtube/math.hpp"


int main()
{
    std::cout << pow(3, 3) << std::endl;
    // std::cout << pow(3) << std::endl;

    Rectangle rectangle;
    rectangle.lenght = 10;
    rectangle.width = 10;

    std::cout << area(rectangle.lenght, rectangle.width) << std::endl;
    std::cout << area(rectangle.lenght) << std::endl;
    std::cout << area(rectangle) << std::endl;

    return 0;
}