#include <iostream>
#include <string>

void swap(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}

void swap(std::string &a, std::string &b)
{
    std::string temp = a;
    a = b;
    b = temp;
}

int main()
{ 
    int a = 10;
    int b = 20;
    swap(a, b);

    std::string first_name = "Sang";
    std::string last_name = "Nguyen Cong";
    swap(first_name, last_name);
    std::cout << a << "\t" << b << std::endl;
    std::cout << first_name << " " << last_name << std::endl;
}