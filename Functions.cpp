/*
Functions :
            piece of code to perform a specific task 
            usage : returnType Function_name(parameters)
                    {
                        logic;
                        return returnTypeVariable;
                    }
            
            types : Built in and user defined 
                    Built in : predefined in header and can be directly used by adding the relevant header 
                    user defined : defined by the user and are a part of the code 
                                   In this we have three steps functin decvlaration , function defination and calling the function 
                                   in defination/ declaration -- parameters to functions 
                                   in calling -- arguments to functions 
*/

#include<iostream>
using namespace std;

void sum();
int sum_withreturntype(int , int );
void display (string name );
string display();

int main()
{
    // sum();
   int value =  sum_withreturntype(99, 1);
   cout << value<<endl ;
   string s = display ();
    cout << s <<endl;
    return 0;
}


void sum()
{
    int a , b , sum = 0;

    cout << " enter  numbers : "<<endl;
    cin >> a >> b ;
    sum = a+b ;
    cout << "the sum is "<< sum <<endl;
    // string s = display();
    // cout << s <<endl;

}

int sum_withreturntype(int a , int b )
{
    return a+b;
}

void display (string name )
{
    cout << "Hi "<< name <<endl; 
}

string display ()
{
    return " bye bye ";
}