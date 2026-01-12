#include<iostream>
#include<string>
using namespace std;

class Demo
{
    private: 
        int* data;
        int size ;
    public: 
        Demo(int n)
        {
            size = n;
            data = new int [n] ;
            for(int i =0 ; i<n ;i++)
            {
                data[i] = i ;
            }
        }
        void print() 
        {
            for(int i=0;i<size;i++) cout << data[i] << " ";
            cout << endl;
        }
        void setValue(int idx, int val)
        { 
            data[idx] = val;
        }
        ~Demo()
        {
            delete [] data ;
        }
};

int main()
{
     Demo d1(5);
     Demo d2 = d1;   // shallow copy

     d2.setValue(0, 100);

     d1.print();     // ❌ prints 100! affected by d2
    
    return 0;
}
