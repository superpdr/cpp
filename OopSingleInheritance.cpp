#include<iostream>
using namespace std ;
//***********************************************************************************/
// class Dad 
// {
//     protected :
//         int amount ;
//     public : 
//         void input ()
//         {
//             amount = 1000 ;
//         }
// };

// class Son : public Dad 
// {
//     int money = 1234;
//     public : 
//         void show ()
//         {
//             cout << amount <<endl;
//             cout << money << endl ;
//         }

// };


// int main ()
// {
//     Son s ;
//     s.input();
//     s.show();

//     return 0;

// }
//*****************************************************************//////////////////////////////////////////


int a , b, c  ;
class A
{
    
    public : 
    void input ();
    void add ();
};

void A :: input()
{
    cout << " enter the numnbers "<< endl ;
    cin >> a >> b;

}
void A :: add ()
{
    c =a + b;
    cout << " addition "<< c <<endl;
}

class B
{
    public :
        void sub();
};

 void B  :: sub()
{
    c= a-b ;
    cout << "substraction"<< c << endl;
}

class C : public A , public B 
{
    public : 
        void multi ();
};

 void C :: multi()
{
    c = a*b ;
    cout << " multiplication "<< c << endl; 
}


int main ()
{
    C obj ;
    obj.input();
    obj.multi();
    obj.add();
    return 0 ;
}