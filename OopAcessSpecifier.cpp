#include<iostream>
using namespace std ;

class AccessSpecifier
{
private :
    int pvt ;
protected :
    int  protctd;

public:
    int pub; 


};

int main()
{
    AccessSpecifier obj ;
    obj.pvt =10 ;                  // not allowed
    obj.protctd= 20 ;             // not allowed
    obj.pub = 30 ;

    cout << obj.pvt <<endl;        // not allowed
    cout << obj.protctd <<endl;    // not allowed
    cout << obj.pub <<endl;

    return 0;
}