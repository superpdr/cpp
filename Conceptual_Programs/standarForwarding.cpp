#include <iostream>
#include<utility>
using namespace std;

void test(int& x)
{
    cout << "L value reference"<< endl; 
}

void test(int&& x)
{
    cout << "R value reference"<< endl; 
}

template<typename T>
    void wrapper(T&& param)
    {
       test(std::forward<T>(param)) ;
    }

int main()
{   
    int a = 10;
    wrapper(a);
    wrapper(10);
    return 0;
}
