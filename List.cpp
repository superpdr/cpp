#include <iostream>
#include <list>
#include <algorithm>

using namespace std;

int main()
{
    list <int>l ;
    list <int>:: iterator it ;

    cout << " entering scores at the front " <<endl;
    for (int i =0 ;i<5;i++)
    {
        int temp ;
        cout << " enter the score "<< endl;
        cin >> temp;
        l.push_front(temp);
    }
    cout << " entering scores at the back " <<endl;
    for (int i =0 ;i<5;i++)
    {
        int temp ;
        cout << " enter the score "<< endl;
        cin >> temp;
        l.push_back(temp);
    }
    cout << " the elements in the list are : " << endl;
    for(auto x:l)
    {
        cout << x << " ";
    }

    for (it =l.begin(); it !=l.end(); it++)
    {
        if(*it < 50)
        {
           it = l.erase(it);
        }
        else
        {
            it++;
        }
    }
    cout << " the elements in the list after removing below 50 are : " << endl;
    for(auto x:l)
    {
        cout << x << " ";
    }

    l.sort(greater<int>());
    cout << " the elements in the list after sorting are : " << endl;
    for(auto x:l)
    {
        cout << x << " ";
    }
    l.unique();
    cout << " the elements in the list after removing duplicates are : " << endl;
    for (auto x:l)
    {
        cout << x << " ";
    }

    return 0;
    
}