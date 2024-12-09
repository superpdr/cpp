/*
iostream is the library 
istream 
ostream

objects of iostream 
cin : associated with extraction operator 
cout : associated with insertion operator 
cerr : ostream 
clog : ostream 
*/

#include<iostream>
using namespace std ;

int main()
{
    int a ;
    int b =10 ;
    cout << " enter a "<< endl;
    cin>>a;
    cout << "the 10 ahead of a 1is " << a+b <<endl;


    return 0;
}