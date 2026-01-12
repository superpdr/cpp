#include<iostream>
#include<string>
using namespace std;
class Person 
{
    private:
        int age;
        string name;
        
    public:
        Person(string str = "", int num = 0 )
        {
            name = str;
            age = num ;
        }
        
       bool  operator== (const Person& other)
        {
            bool flag = false;
            {
                if ((this->name == other.name) && (this->age == other.age)){
                    flag = true;
                }
            }
            return flag;
        }
        
        friend ostream&  operator<< (ostream& os, const Person& other )
        {
            os << "Name: " << other.name << " \nage: "<< other.age ; 
            return os;
        }
    
};


int main()
{
    Person p1 ("sachin", 48);
    Person p2 ("virat", 35);
    if (p1==p2)
    {
        cout<< "legends";
    }
    else
    {
        cout << "both are great\n";
    }
    
    cout << p1;
    
    return 0;
}
