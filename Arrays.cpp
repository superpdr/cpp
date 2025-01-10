/*
    Array - collection of the same type of element 
             fixed size of the array 
    need - like a container to store more than one values 
    array elements are stored in contiguous memory location 
    the address of the array is base i.e the first element.
    offsets : the index of the array 


    multi dimension Array :
                datatype arrayname [size 1][size 2].....[size n ]
                if the value are not provided then  the value would be set to zero
                Memory representation : 
                    contiguous memory allocation 
                    pattern is - row major and column major saving 
                                row major = raw wise saving 
                                column major = column wise saving 
                                the element remains same but the address of the same element changes 


*/

#include<iostream>
using namespace std ;

void Array_Test();
void Array_AccessElement_Test();
void Array_2D_Test();

int main()
{
    // Array_Test();
    //   int random_numbers[10];
    //   cout << 5 <= sizeof(random_numbers)/4 <<endl;
    // Array_AccessElement_Test();
    Array_2D_Test();
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

void Array_2D_Test()
{
    int array2d [3][3] = {0,1,2,3,4,5,6,7,8};
    //  cout << array2d[0][1];
    int collection [2][2];

    for(int i = 0 ; i < 2 ; ++i)
    {
        for(int j = 0 ; j < 2 ; ++j)
        {
            cout << " enter "<< i <<" "<<j << " th element :"<<endl;
            cin >> collection[i][j];
        }
    }

}