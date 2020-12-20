#include <iostream>

struct User
{
private:
    std::string status = "So Handsome";

public:
    std::string first_name;
    std::string last_name;
    std::string get_status()
    {
        return status;
    }
};

int main()
{
    User me;
    me.first_name = "Sang";
    me.last_name = "Nguyen Cong";
    // me.status = "So Handsome";
    std::cout << me.last_name << " " << me.first_name << " " << me.get_status() << std::endl;
    return 0;
}