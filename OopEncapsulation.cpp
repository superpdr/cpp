#include<iostream>
using namespace std ;
class Thief 
{
    private : 
     string name ,address ; 

     public :
     void details ()
     {
        name = " rocky ";
        address = " kolhapur ";
     }

     void showDetails()
     {
        cout << " name is "<<name <<endl ;
        cout << " address is "<< address <<endl; 
     }
};

class Police : public Thief
{

};


int main ()
{

    // // Thief t ;
    // t.details();
    // t.showDetails();

    Police p ;
    p.details();
    p.showDetails();

    return 0 ; 
}