/*
    Break Statement :
        control statement , jump statement ;
        within loops and switch case only 
        it breaks the loop
        Break statement within the nested loop :

    Continue Statement :
        control statement , jump statement ;
        continue as name suggest continue the code by skipping the condition 

    Infinite Loops : 
        loop without exit condition 
            no termination condition 
            condition is there but it does not meet 
            condition is there and it asks to start over again 


*/

#include<iostream>
using namespace std ;

void Break_Statement_Test();
void Test();
void Break_Within_NestedLoop_Test();
void Continue_Statement_Test();
void Infinite_Loop_Test();


int main()
{
    // Break_Statement_Test();
    // Test();
    // Break_Within_NestedLoop_Test();
//    ontinue_Statement_Test();
    Infinite_Loop_Test();
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

void Break_Within_NestedLoop_Test()
{
    for (int i = 0 ; i<=3 ; ++i )
    {
        for  (int j =0 ; j<=3 ; ++j )
        {
            if (j == 2 )
                break;
            cout << i <<" "<< j << endl;
        }
        if (i == 1)
            break;
    }

}

void Continue_Statement_Test()
{
    for (int i =0 ; i <=10; ++i)
    {
        if (i == 7 )
            continue;
        cout << i <<endl;
    }
}

void Infinite_Loop_Test()
{
    for (int i = 0 ; ; i++)
    {
        cout << "Hi " ;
    }

}