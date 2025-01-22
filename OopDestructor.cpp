#include<iostream>
using namespace std ;
int count = 0 ;

class A 
{
    public : 
        A()
        {
            cout << "construcotr "<<endl;
            cout << "object "<< ++count<<" created "<<endl;        
        }

        ~A()
        {
            cout << "destructor  "<<endl;
            cout << "object "<< count--<<" deleted "<<endl;        
        }


};

int main()
{
    A obj;
    A obj2 ;

}