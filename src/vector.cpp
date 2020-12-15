#include <iostream>
#include <vector>

void print_vector(const std::vector<int> &data)
{
    for(size_t i = 0; i < data.size(); ++i)
    {
        std::cout << data[i] << "\t";
    }
    std::cout << "\n";
}

int main()
{
    std::vector<int> data = {1, 2, 3};
    data.push_back(100);
    std::cout << data[data.size() - 1] << std::endl;
    print_vector(data);
}