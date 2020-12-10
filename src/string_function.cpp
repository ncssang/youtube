#include <cmath>
#include <iostream>
#include <string>

int main()
{
    std::string file = "Hello there";
    std::cout << file.length() << std::endl;
    std::cout << file.size() << std::endl;
    std::cout << file[2] << std::endl;
    std::cout << file + "!" << std::endl;
    std::cout << file.insert(3, "ddddd") << std::endl;
    std::cout << file.erase(3, 5) << std::endl;
    std::cout << file.append("!") << std::endl;
    file.pop_back();
    std::cout << file << std::endl;


    std::string greeting;
    getline(std::cin, greeting);//getline for get_string
    // cin.getline();for get_number;
    std::cout << greeting << std::endl;
    return 0;
}