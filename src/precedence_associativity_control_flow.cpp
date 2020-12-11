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

    /*LOOPING
        - Initialize
        - Condition
        - Update
    
    In the while loop the code happens after the condition
    In the do-while loop the code going to execute at least once and then check the condition
    For loop syntax:
    for (I; C; U)
    {
        code;
    }
    */
    int i = 0;
    while (i < 10)
    {
        std::cout << i << "\t";
        i++;
    }
    std::cout << "\n";

    int fact = 5;
    int factorial = fact;
    for (int i = factorial - 1; i > 0; --i)
    {
        factorial = factorial * i;
    }
    std::cout << "factorial of " << fact << " = " << factorial << std::endl;

    int number = 5;
    int j = number - 1;
    while(j > 1)
    {
        number *= j;
        --j;
    }
    std::cout << "factorial of number = " << number << std::endl;

    /*
    //do-while loop
    std::string password = "calebcurry";
    std::string guess;
    do
    {
        std::cout << "Enter the password:";
        std::cin >> guess;
    } while(guess != password);
    */
    return 0;
}