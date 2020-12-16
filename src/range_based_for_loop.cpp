#include <array>
#include <iostream>
#include <vector>

int main()
{
    int data[6] = {1, 2, 3, 4, 5, 6};

    for (int j : data)
    {
        std::cout << data[j] << "\t";
    }

    // for(int i =0 ; i < 6; ++i)
    // {
    //     std::cout << data[i] << "\t";
    // }
    std::cout << "\n";
}