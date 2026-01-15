#include <iostream>
#include <vector>
using namespace std;

class Demo
{
public:
    Demo(int x)
    {
        cout << "Constructor\n";
    }

    Demo(const Demo&)
    {
        cout << "Copy Constructor\n";
    }

    Demo(Demo&&) noexcept
    {
        cout << "Move Constructor\n";
    }

    ~Demo()
    {
        cout << "Destructor\n";
    }
};

int main()
{
    vector<Demo> v;
    v.reserve(2);

    v.push_back(Demo(10));
    v.emplace_back(20);
}

Constructor
Move Constructor
there is one destructor of the temp object here 
constructor
destructor 
destructor 
