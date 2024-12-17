/*
    Break Statement :
        control statement , jump statement ;
        within loops and switch case only 
        it breaks the loop
    Continue Statement :


*/

#include<iostream>
using namespace std ;

void Break_Statement_Test();
void Test();

int main()
{
    // Break_Statement_Test();
    Test();
    return 0;
}

void Break_Statement_Test()
{
    for (int i = 0 ; i<=10 ; ++i)
    {
        if (i == 7)
        break;
        cout << i << "\n"; 
    }
}

void Test()
{
    int number , sum = 0;

    while (true )
    {
        cout << " enter the number : "<<endl ;
        cin >> number ;
        if (number <= 0)
        break;
        sum += number;
    }
    cout << sum << endl ;
}