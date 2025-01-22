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

            parameter passing : call by value adn call by referrence 
                                parameters are something on which logic is written adn arguments are something on which implementation is done 
                                
                                call by value :
                                                Here a copy of the variable is passed to the function .
                                                so the original variables remain intact and implementation on newly created variables as copy 
                                                actual values is not modified  
                                call by referrence :
                                                this is done by : using referrence or by using the pointers 
                                                here values are passed by referrence . 
                                                referrence is passed by address of operator 


*/

#include<iostream>
using namespace std;


void FunctionCallPtr(int*);
void callbyreferrence(int&);
void callByValue(int );
void sum();
int sum_withreturntype(int , int );
void display (string name );
string display();

int main()
{
    // sum();
//    int value =  sum_withreturntype(99, 1);
//    cout << value<<endl ;
//    string s = display ();
//     cout << s <<endl;

      int a = 10 ;
      cout << " before modification "<<a <<endl;
      FunctionCallPtr(&a);
      cout <<"after modification "<<a << endl ;

    // call by referrence 
    // int a = 100;
    // int &b = a;
    // a =50 ;
    // (addressof(a)== addressof(b)) ? cout<<"same"<<endl: cout << "not same "<<endl;
    // cout << " b = "<<b <<endl;
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

void callByValue(int temp )
{
    temp = 50 ;
    cout << " Modified value "<< temp <<endl;

}
void callbyreferrence(int &temp )
{
    temp = 50 ;
    cout << "Modified value " <<temp <<endl ;

}

void FunctionCallPtr(int* number)
{
    *number = (*number)* 10;
    cout << "the value is multipleid "<<*number<<endl ;
}