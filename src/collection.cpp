#include <iostream>
#include <limits>

void print_array(int array[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        std::cout << array[i] << "\t";
    }
    std::cout << std::endl;
}

int main()
{
    // int guesses[] = {12, 43, 43, 23, 43};
    const int SIZE = 10;
    int guesses[SIZE];
    int count;

    for (int i = 0; i < SIZE; ++i)
    {
        if (std::cin >> guesses[i])
        {
            count++;
        }
        else
        {
            break;
        }
    }
    print_array(guesses, count);
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}