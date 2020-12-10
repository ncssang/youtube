#include <iostream>

int main()
{
    //precedence: nhân chia trước, cộng trừ sau. trong ngoặc trước.
    float x, y;
    x = 10;
    (y = x) = 100; //associativity left to right
    // y = x = 100;   //associativity right to left
    std::cout << x << "\t" << y << std::endl;

    /*control flow
    branching(if, switch);
    looping(while, for, do-while);
    */
   /*
   logical (&& = and, || = or, ! = not)
   comparision (== is equal, != is not equal, < is less, > is than, <=less or equal, >= is than or equal)
   */
}