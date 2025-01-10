/*
STL : collection of some DS ,algorithm, functions to simplify the coding (reuse the code )
      vector list map  stack queue 
      vector is class 
      
vector :
        like array it a collection of  same data type (homogenous) but it differs from array as it is dynamic unlike array 
        vector = dynamic array (size of vector can be increased / decreased at runtime )
        sequence container , accessing through position 
        vector provide bound checkin unlike array 

        usage : vector <object type > vector _name(size is optional)

*/



#include<iostream>
#include<vector>
using namespace std;

void Vector_Test();
void Vector_Function_Test();
int main()
{
    // Vector_Test();
   Vector_Function_Test();
    return 0 ;
}

void Vector_Test()
{
    // vector<int> numbers;
    // int value ;
    // numbers.push_back(10);
    // numbers.push_back(20);
    // for (int i = 0 ; i < 5 ; ++i)
    // {
    //     cout <<"enter the number"<<endl;
    //     cin >> value; 
    //     numbers.push_back(value);
    // }
    // cout << numbers.size();
    // cout << numbers[3];

    // vector<int> newNumbers(10);
    // fill(newNumbers.begin(),newNumbers.end(),5);
    // for(int i =0 ; i<10; ++i)
    // {
    //     cout<<newNumbers[i]<<endl;
    // }

     vector<int > trial = {0,1,2,3,4,5};
        // cout << "number with bound chekc with function at "<< trial.at(3);
        //    cout << trial.at(10);




}

void Vector_Function_Test()
{
    vector<int> v = {10,20,30,40,50,60};
    // iterator is a pointing to the element in the vector 
    vector<int>:: iterator itr ;
    // for(itr = v.begin(); itr != v.end(); ++itr)
    // {
    //     cout << *itr <<endl;
    // }
    for (itr = v.end(); itr!=v.begin();)
    {
        --itr;
        cout << *itr <<endl;
    }
    v.resize(3);
    v.at(0)= 1111;
    for (auto itr = v.begin();itr!=v.end();++itr)
    {
        cout << *itr <<endl ;
    }
}