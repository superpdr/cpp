#include<iostream>
using namespace std ;
int main()
{
    int main = 10 ;
    cout <<"the main value "<< main;
    // main is not a keyword 

    int cout = 11 ;
    std::cout << "the value of the cout is "<< cout<<endl ;
    // cout << "the value of the cout is "<< cout<<endl ;
    /* the above line gives error 
       as te cout as variable */
    return 0;
}