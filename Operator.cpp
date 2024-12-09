/*
type : unary , binary, ternary 

Arithmetic  : +,-,*,/, %, ++,--
relational : 
logical : && ,||, !
bitwise  : &, |,!,lest shift . right shift
assignment :
Misc :
    conditional : "condition ? expr1 : expr2"
    size0f() : size of object
    address of & :  ampersand 
    pointer to * : 
    cast : unary operator 


    operator precedence and associativity -
    
*/

#include<iostream>
using namespace std ;

int main()
{
    // increment and decrement operator value updatation and saving 
    int a =10 ;
    int b ;
    int c =10;
    int d ;
    b = a++ ;
    d = ++c ;
    cout << "a & b "<< endl<<a <<"   " << b <<endl;
    cout<< "c and d "<< endl <<c << "   "<<d <<endl;

    float pi = 3.142 ;
    cout << " the cast operator "<< (char) pi <<endl;

    return 0;
}