/*
    Array - collection of the same type of element 
             fixed size of the array 
    need - like a container to store more than one values 
    array elements are stored in contiguous memory location 
    the address of the array is base i.e the first element.
    offsets : the index of the array 

*/

#include<iostream>
using namespace std ;

void Array_Test();
void Array_AccessElement_Test();

int main()
{
    // Array_Test();
    //   int random_numbers[10];
    //   cout << 5 <= sizeof(random_numbers)/4 <<endl;
    Array_AccessElement_Test();
    return 0 ;

}

void Array_Test()
{
    int random_numbers[10];
    for (int i = 0 ; i < sizeof(random_numbers)/4; ++i )
    {
        cout << " enter the number :"<<endl;
        cin >> random_numbers[i];
    }
    cout << " end of the array " << endl; 
    cout << " the array is "<<endl ;
    for (auto itr : random_numbers)
    {
        cout << itr <<endl ;
    }
}

void Array_AccessElement_Test()
{
    int random_numbers[5];
    for(int i = 0 ; i<5; ++i)
    {
        cout << "enter the elements"<<endl;
        cin >> random_numbers[i];
    }

    cout << " base address"<<random_numbers<<endl ;
    for (auto &itr : random_numbers)
    {
        cout << " the adrress : "<< &itr<<endl;
    }
}