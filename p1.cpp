#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int main()
{
    vector <int> v = {10,32,8, 10,56 ,47, 10 ,11};
    vector <int>:: iterator it ;
    vector <int>:: reverse_iterator rit;


    //sorting the vector 
    // cout << "ascending sorting "<<endl;
    // sort(v.begin(), v.end());

    // for(auto x : v)
    // {
    //     cout << x << " ";
    // }
    // cout << "\n descending sorting "<<endl;
    // sort(v.begin(), v.end(), greater<int>());
    // for (auto x: v)
    // {
    //     cout << x << " ";
    // }
    // cout << "\n  reversing the vecotr  "<<endl;
    // reverse(v.begin(), v.end());
    // for (auto x: v)
    // {
    //     cout << x << " ";
    // }


    cout<<"\n count of any number in vector "<<endl;
    auto c  = count(v.begin(), v.end(), 10 );
    cout << "\n count of 10 in the vector is : " << c << endl;

    cout << " sum of the elements in the vector " << endl;

    auto  sum = accumulate(v.begin(), v.end(), 0);
    cout << "\n sum of the elements in the vector is : " << sum << endl;

    cout << "gettin the product of of the elements in the vector " << endl; 

    auto product = accumulate(v.begin(), v.end(), 1 , multiplies<int>());
    cout << "\n product of the elements in the vector is : " << product << endl;

    cout << "getting the max element and min element  in the vector " << endl;
    auto max = *max_element(v.begin (), v.end());
    auto min = *min_element(v.begin (), v.end());
    cout << "\n max element in the vector is : " << max << endl;
    cout << "\n min element in the vector is : " << min << endl;

    cout << "removing the elements from the vector " << endl;
    remove(v.begin(), v.end(), 10 );
    cout << "print vector after std::remove " <<endl;
    for (auto x: v)
    {
        cout << x << " ";
    }

    cout << " \n not correct method as it rearranges and not erases also size of the vector is not changed " << endl;

    cout << " always use the erase remove idiom " << endl; 
    
    v.erase(remove(v.begin(), v.end(), 10), v.end());
    cout << " print the vector after erase remove idiom " << endl;
    for (auto x: v)
    {
        cout << x << " ";
    }


    //searching a key in the vector 
    // int key; 
    // cout << " \n Enter the key to search : ";
    // cin >> key ;

    

    // it = find(v.begin(), v.end(),key);
    // if (it != v.end())
    // {
    //     cout << " \n key found :" << distance(v.begin(), it )<<  endl;

    // }
    // else
    // {
    //     cout << "key not found " << endl; 
    // }




    
}        
