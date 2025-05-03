#include <iostream>
 
int value = 100;

int add(int a, int b)
{
    std::cout << "Global add function called" << std::endl;
    return a+b;
}

namespace N1
{
    namespace math
    {
        int add(int a, int b)
        {
            return a+b;
        }

    }
    namespace AdvMath
    {
        int sqr(int a)
        {
            return a*a;
        }

    }
}
namespace 
{
    void print()
    {
        std::cout << "Hello from anonymous namespace" << std::endl;
    }
}


int main()
{
    std::cout << add(10,20) << std:: endl; // calls global add function
    std::cout << N1::math::add(10,20) << std:: endl; // calls N1::math add function
    std::cout << N1::AdvMath::sqr(10) << std:: endl; // calls N1::AdvMath sqr function
    std::cout << value << std:: endl; // calls global value variable
    print(); // calls anonymous namespace function

    return 0;
}