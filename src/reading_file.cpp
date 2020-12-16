#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>

int main()
{
    std::ifstream file("test.txt");
    if (file.is_open())
    {
        std::cout << "It's worked!\n";
    }
    std::string line;
    getline(file, line);
    std::cout << line << "\n";
    return 0;
}