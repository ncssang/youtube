// #include <iostream>
// #include <vector>
// // struct User
// // {
// //     std::string first_name;
// //     std::string last_name;
// //     std::string get_status()
// //     {
// //         return status;
// //     }

// // private:
// //     std::string status = "So Handsome";
// // };

// class User
// {
//     std::string status = "So Handsome";

// public:
//     std::string first_name;
//     std::string last_name;
//     std::string get_status()
//     {
//         return status;
//     }
// };

// int main()
// {
//     User me;
//     me.first_name = "Sang";
//     me.last_name = "Nguyen Cong";
//     // me.status = "So Handsome";
//     std::cout << me.last_name << " " << me.first_name << " " << me.get_status() << std::endl;

//     std::vector<User> users;
//     users.push_back(me);
//     std::cout << users[0].first_name << std::endl;

//     return 0;
// }

#include <iostream>
#include <string>
class Student
{
private:
    std::string name_;
    size_t age_;

public:
    Student(std::string name = "Unknown", size_t age = 0);

    ~Student();
    void print();
    void set_name(const std::string& name)
    {
        name_ = name;
    }
    void set_age(size_t age)
    {
        age_ = age;
    }
};

Student::Student(std::string name, size_t age)
    : name_(name), age_(age)
{
}

Student::~Student()
{
    std::cout << name_ << " destructor\n";
}

void Student::print()
{
    std::cout << "Student: " << name_ << ", " << age_ << " years old." << std::endl;
}

void print_student(const Student& t)
{
    Student inside("sang");
}

int main()
{
    // for (size_t i = 0; i < 10; ++i)
    // {
    Student student("Quang");
    print_student(student);
    // }
    // Student student_1("Quang", 20);
    // // student_1.set_name("Quang");
    // // student_1.set_age(30);

    // // Student student_2;
    // Student student_3;
    // student_1.print();
    // student_3.print();
    return 0;
}
