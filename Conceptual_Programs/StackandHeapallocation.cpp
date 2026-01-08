
#include <iostream>
using namespace std;

class Demo
{
    private: 
        int a ;
    public:
        
        Demo(int var)
        {
            a = var;
            cout << "Inside constructor"<<endl; 
        }
     
        ~Demo()
        {
           cout << "Inside destructor"<<endl;
        }
};

    void demoWithheap()
        {
          Demo* d1 = new Demo (10);
          cout << " the objext is created in heap with heap "<<endl ;
          delete d1 ;
        };
       void demoWithstack()
        {
            Demo d1 (10);
            cout << " the objext is created in heap  " <<endl ;
           
        };        
         

int main()
{
 
    demoWithheap();
    demoWithstack();
    return 0;
}
