#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int main()
{
    cout << " Task on Vectors " << endl;

    vector <int> v;
    vector <int>:: iterator it ;

    int n; 
    cout << " enter the number "<< endl;
    cin >> n ;

    for (int i = 0  ; i < n ; i++)
    {
        int temp;
        cout << " enter the element for the vector "<< endl;
        cin >> temp;
        v.push_back(temp);
    }    

    cout << " the elements in the vector are : " << endl;
    for (auto x:v)
    {
        cout << x << " ";
    }
    
    sort(v.begin(), v.end());

    for (auto x:v)
    {
        cout << x << " ";
    }

    auto c = count(v.begin(), v.end(), 10 );
    cout << "\n count of 10 in the vector is : " << c << endl;
    
    auto sum  = accumulate(v.begin(), v.end(), 0);
    cout << "\n sum of the elements in the vector is : " << sum << endl;

    v.erase(unique(v.begin(), v.end()), v.end());
    cout << " the elements in the vector after removing duplicates are : " << endl;
    for (auto x:v)
    {
        cout << x << " ";
    }

    cout << " max element "<< *max_element(v.begin(),v.end())<< endl;
    cout << " min element "<< *min_element(v.begin(),v.end()) << endl;

     return 0;
}