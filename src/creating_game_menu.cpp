#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>

void print_array(int array[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        std::cout << array[i] << "\t";
    }
    std::cout << std::endl;
}

void play_game()
{
    int guesses[251];
    int guess_count = 0;

    int random = rand() % 251;
    std::cout << random << std::endl;
    std::cout << "Guess the number: " << std::endl;
    while (true)
    {
        int guess;
        std::cin >> guess;
        guesses[guess_count++] = guess;
        if (guess == random)
        {
            std::cout << "Correct!\n";
            break;
        }
        else if (guess < random)
        {
            std::cout << "Too low!\n";
        }
        else
        {
            std::cout << "Too high!\n";
        }
    }
    print_array(guesses, guess_count);
}

int main()
{
    srand(time(NULL)); //changing the input of this random number generation
    int choice;
    do
    {
        std::cout << "0. Quit" << std::endl
                  << "1. Play game\n";
        std::cin >> choice;

        switch (choice)
        {
            case 0:
                std::cout << "Thannks for nothing!\n";
                return 0;
            case 1:
                play_game();
                break;
        }
    } while (choice != 0);
}