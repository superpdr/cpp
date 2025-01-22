#include<iostream>
using namespace std;
class class2; 
class Test 
{
    string tv ;
public:
    void show ()
    {
        tv = " today is 9 pm show ";
    }

    friend void friendFunction(Test t);

};

class class1 
{
    int a ;
    public :
    class1()
    {
        a =100 ;
    }

    friend void sum (class1 c1 , class2 c2 );
};

class class2 
{
    int a ;
    public :
    class2()
    {
        a =200 ;
    }
    friend void sum (class1 c1 , class2 c2 );
};

void friendFunction(Test t)
{
    cout << " In friend function "<<endl;
    cout << t.tv << endl;
}

 void sum (class1 c1 , class2 c2 )
 {
    cout << "the sum is "<< c1.a + c2.a << endl ;
 }


int main()
{
    // Test t1 ;
    // t1.show();
    // friendFunction( t1 );
    class1 c1 ;
    class2 c2 ;
    sum (c1,c2 );

    return 0;

}