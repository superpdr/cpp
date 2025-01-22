#include<iostream>
using namespace std ;

class A 
{
    int a ,  b ;
    public : 
     A (){ a =10 ;
        b = 20 ;
    }
     friend class B; 
};

class B 
{
    int c ; 
    public : 
        void sum (A r){
            c = r.a + r.b ; 
            cout << c <<endl;
        }
};

int main ()
{
    A obja ;
    B objb ;

    objb.sum(obja);
    return 0 ;
}