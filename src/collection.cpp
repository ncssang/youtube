#include <iostream>

int main()
{
    int guesses[20] = {12, 43, 43, 23, 43};
    int size = sizeof(guesses) / sizeof(guesses[0]);
    std::cout << size << std::endl;
    for (int i = 0; i < 5; ++i)
    {
        std::cout << guesses[i] << "\t";
    }
    std::cout << std::endl;
}