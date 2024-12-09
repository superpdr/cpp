/*
    Iteration control structure :
        loops : performing the single task for multiple number of times 
                - initialization 
                - terminating condition 
                - updatation(counter)
        entry controlled loop and exit controlled loop 

        types :
            for 
            while 
            do while 
            range based for 
        
        For Loop :
            for multiple condition check for multiple variable separated by comma then only the last statement will be checked  



*/

#include<iostream>
using namespace std; 

void For_Test();

int main()
{
    For_Test();
    return 0;
}

void For_Test()
{
    int  i , sum = 0 ;
    for ( i =1 ; i <=15 ; i += 2 )
    {
        cout << i << endl ;
        sum += i;
    } 
    cout << " end of iteration "<< endl;
    cout << " the sum is :" << sum  <<endl;

}