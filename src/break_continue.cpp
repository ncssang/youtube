#include <iostream>

int main()
{
    std::string sentence = "Hello my name is Sang!";
    for (size_t i = 0; i < sentence.size(); ++i)
    {
        std::cout << sentence[i] << std::endl;
        if (sentence[i] == 'l')
        {
            std::cout << "found l!\n";
            break;
        }
    }
    std::cout << "Done!\n";
    /*
        with break we'll get out of the loop;
        with continue we'll stop current iteration and go to the next iteration of the loop;

        for (size_t i = 0; i < sentence.size(); ++i)
    {
        if(sentence[i] == 'l')
        {
            break;
        }
        std::cout << sentence[i] << std::endl;
    }
    */
}