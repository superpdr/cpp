#include<iostream>
using namespace std ;

class A
{
   int a ,b ;
   public :
   A()     //default constructor 
   {
    a = 10 ;
    b = 20 ;
    cout << " default constructor "<< a << " , "<<b << endl;
    }
    A( int a , int b )
    {
       this -> a = a;
        this ->b = b ;
            cout << " parameterized  constructor "<< a << " , "<<b << endl;


    }

    A (const A &reff)        // please revise the use of const keyword here 
    {
        a = reff.a ;
        b = reff.b ; 
        cout << "copy constructor called "<< a <<", "<<b << endl ;
    }


};

int main ()
{
    A obj ;
    A obj1 = A(11,22); 

    A obj2 = obj1;

    return 0;
}