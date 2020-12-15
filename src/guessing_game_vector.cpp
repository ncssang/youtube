#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>
#include <vector>

void print_vector(std::vector<int> vector)
{
    for (size_t i = 0; i < vector.size(); ++i)
    {
        std::cout << vector[i] << "\t";
    }
    std::cout << std::endl;
}

void play_game()
{
    std::vector<int> guesses;
    
    int random = rand() % 251;
    std::cout << random << std::endl;
    std::cout << "Guess the number: " << std::endl;
    while (true)
    {
        int guess;
        std::cin >> guess;
        guesses.push_back(guess);
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
    print_vector(guesses);
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