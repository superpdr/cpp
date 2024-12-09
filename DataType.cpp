/* Data types in c++ 
1 byte = 8 bits 
       |0|0|0|0|0|0|0|0|


 primary data type  : int ,float ,double , char ,wchar_t, bool ,void  
 derived data type : array pointer, function , referrence
 user defined data type : class struct, union, typedef, enum


 Data Modifier : 
 signed , unsigned , short ,long 

Built in data type (primary data type ) 

1) int : 4 byte  
2) float : 4 byte ; no data modifiers with float ;
3) double : 8 byte ; long double  is 12 byte ; 
4) char : 1 byte ; signed and unsigned ; Ascii  representation 
5) wchar_t : 2 byte ; used to represent the unicode characters;
6) bool : true or false ; 1 byte 
7) void : 
             

*/
#include <iostream>
using namespace std; 

int main()
{
    // float a = 123.456789;
    // cout << "the value of a "<< a << endl ;
    // char ch = 33;
    // cout << " the value of the char " << ch << endl ;
    // wchar_t ch = L'a';
    // cout << " the value of the wide char " << ch << endl ;
    // cout << " the value of the char " << sizeof(ch) << endl ;
    void *ptr ;
    int a =10;
    ptr = &a ;
    cout << *(int*)ptr<< endl;

    return 0;
}