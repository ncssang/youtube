#include <iostream>
#include <string>

int main()
{
    int answer = 11;
    int guess;
    std::cout << "Guess the number: ";
    std::cin >> guess;
    guess == answer ? std::cout << "Good job!\n" : std::cout << "Bad job!\n";
}