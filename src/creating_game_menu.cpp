#include <iostream>
#include <string>

int main()
{
    int choice;
    do
    {
        std::cout << "0. Quit\n1. Play game\n";
        std::cin >> choice;

        switch(choice)
        {
            case 0:
                std::cout << "Thannks for nothing!\n";
                return 0;
            case 1:
                std::cout << "Let's play\n";
                break; 
        }
    } while (choice != 0);
}