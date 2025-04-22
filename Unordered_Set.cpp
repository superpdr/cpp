#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

int main()
{

    unordered_set <int> uset;
    uset.insert(10);
    uset.insert(20);
    uset.insert(30);
    uset.insert(40);
    uset.insert(50);
    uset.insert(20);

    for(auto x : uset)
    {
        cout << x << " ";
    }
    cout << endl;

    int searchNum = 20 ;
     if(uset.find(searchNum) != uset.end())
    {
        cout << searchNum << "  is found in the unordered set." << endl;
    }
    else
    {
        cout << searchNum << "   is not found in the unordered set." << endl;
    }

     return 0;
}