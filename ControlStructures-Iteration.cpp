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
        
        While Loop : 
            entry control loop 
        Do While Loop :
            exit control loop ; At least one time execution 
            do 
            {
            }while(condition);
        Range Based for loop :
            cpp 11 ;
            specifically used on the collections 
            for (range declaration : range expression)
            {
                statements ;
            }
            It is not index based - it will iterate every value in the range expression 

             


*/

#include<iostream>
#include<vector>
using namespace std; 

void For_Test();
void While_Test();
void Do_While_Test();
void Range_Based_Loop_Test();

int main()
{
   // For_Test();
//    While_Test();
    // Do_While_Test();
    Range_Based_Loop_Test();
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

void While_Test()
{
    int a = 0 ;
    bool flag = true ;
    while(flag)
    {
        cout << a << endl ;
        a++;
        if (a == 10)
            flag = false ;
    }
}

void Do_While_Test()
{
    // int a = 0;
    // bool flag = true;
    
    // do
    // {
    //     cout << a << endl;
    //     a++ ;

    // }while(a <= 10);

    int number ;
    do 
    {
        cout << "enter the number : "<<endl;
        cin >> number ;
    }while(number < 0 || number > 5 );
    cout << "Thanks for the correct llimit "<<endl;
}

void Range_Based_Loop_Test()
{
    // int a[] = {1,2,3,4,5};
    vector<int>number = {1,2,3,4,5};
    // for(int itr : a)
    // {
    //     cout << itr <<endl;
    // }
     for(auto itr : number)
    {
        cout << itr <<endl;
    }
}