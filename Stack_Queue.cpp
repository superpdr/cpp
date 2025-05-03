#include <iostream>
#include <stack>
#include <queue>
#include <string>


using namespace std;

// int main()
// {
//     stack <int> st;
//     queue <int> q;

//     for(int i = 0; i < 10; i++)
//     {
//         st.push(i);
//         q.push(i);
//     }

//     while( !st.empty())
//     {
//         cout << "stack top "<< st.top() <<endl;
//         st.pop();
//     }
//     cout << "------------------" << endl;
//     while(!q.empty())
//     {
//         cout << "queue front " << q.front() << endl;
//         q.pop(); 
//    }
//     return 0;
// }

int main ()
{
    stack <char> test;
    stack <char> test2 ;
    string str;

    cout << " enter the string "<< endl;
    cin >> str; 
   signed int  strlen = str.length();

    for(int i =0 ; i < strlen; i++)
    {
        test.push(str[i]);
    }
    stack <char> test1 = test; 

    while(!test.empty())
    {
        test2.push(test.top());
        test.pop();
    }

    int flag = 1;

    while (!test2.empty())
    {
        if (test2.top() != test1.top())
        {
            flag = 0;
            break;
        }
        test2.pop();
        test1.pop();
    }

    flag ==1 ? cout << "palindrome" :cout << "not   palindrome" << endl;

    return 0;
}