#include<iostream>
#include<string>
using namespace std;

class Demo
{
    private:
     int* var ;
    
    public: 
        Demo(int number = 0)
        {
            var = new int (number);
        }
        ~Demo()
        {
            delete var; 
        }
        
        Demo operator= (const Demo& other )
        {
            // ?if(this != &other)
            {
                delete var ;
                var = new int (* other.var);
            }
            return *this; 
        }
};

int main()
{
    Demo d1(10) ,d2(20),d3(30);
    d1 =d2 =d3 ;
    
    return 0;
}

// // Execution:

// d2= d3 → returns a temporary Demo

// d1 = temporary → extra copy

// Temporary destroyed → resource chaos

// Performance hit + potential bugs





/**************************************************************************************************CORRECT VERSION**********************************************************************************************************/

#include<iostream>
#include<string>
using namespace std;

class Demo
{
    private:
     int* var ;
    
    public: 
        Demo(int number = 0)
        {
            var = new int (number);
        }
        ~Demo()
        {
            delete var; 
        }
        
        Demo& operator= (const Demo& other )
        {
            // ?if(this != &other)
            {
                delete var ;
                var = new int (* other.var);
            }
            return *this; 
        }
};

int main()
{
    Demo d1(10) ,d2(20),d3(30);
    d1 =d2 =d3 ;
    
    return 0;
}
