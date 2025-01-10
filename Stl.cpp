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
Pair :
      set of two things
      two  different types in one container 
      order is fixed 
      header file is <utility >   
      usage : pair <datatype1 ,datatype2> pair_name ; 
*/



#include<iostream>
#include<vector>
#include<utility>
using namespace std;

void Vector_Test();
void Vector_Function_Test();
void Pair_Test();
void VectorOfPairs_Test();
void ArraysOfVector_Test();


void VectorsOfVector_Test();



int main()
{
    // Vector_Test();
//    Vector_Function_Test();
//  Pair_Test();

//  VectorOfPairs_Test();
// ArraysOfVector_Test();
VectorsOfVector_Test();
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

void Pair_Test()
{
    pair<int , float> pr(23,2.3);
    pair <int ,float >rp (11,1.1);
    pair <int , string > pr1;

    pr1 = make_pair(7 ,"ronaldo");
    auto pr2 = make_pair("xxx", "xx");

    pair<int , float> pr3(pr);
    pair <bool ,string > pr4;
    pr4.first = true;
    pr4.second = "correct";

    pr.swap(rp); 
    cout << rp.first<<" "<<rp.second;

}

void VectorOfPairs_Test()
{
    vector< pair<int, string> > adata;
    pair<int, string > p1,p2,p3;
    p1={1,"one"};
    p2.first= 2 ;
    p2.second = "second";
    p3 = make_pair(3, "three");

    adata.push_back(p1);
    adata.push_back(p2);
    adata.push_back(p3);

    for(auto itr = adata.begin(); itr!= adata.end();++itr)
    {
        cout << itr->first<< " "<< itr->second<<endl;
    }
}

void ArraysOfVector_Test()
{
    // fixed rows and dynamic number of columns 
    vector<int> array[3];
    array[0].push_back(00);
    array[0].push_back(01);
    array[1 ]= {10,11,12,13};
    array[2].push_back(30);

    for (int i =0 ; i<3; ++i)
    {
        for (int j =0; j<array[i].size();++j)
        {
            cout << array[i][j]<< " "<<endl;
        }
        cout <<"\n";
    }


}

void VectorsOfVector_Test()
{
    // rows and columns both are dynamic 

    vector <vector <int> > v ;

    v.push_back({1,2,3,4});
    v.push_back({1});

    for (int i =0 ; i< v.size(); ++i)
    {
        for (auto itr = v[i].begin();itr!=v[i].end(); ++itr)
        {
            cout << *itr << " ";
        }
        cout <<'\n';
    }


}