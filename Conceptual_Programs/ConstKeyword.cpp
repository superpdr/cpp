#include <iostream>
using namespace std;

class Test
{
    private:
        int var ;
    public:
        Test()
        {
            cout << "enter the variabnle"<<endl;
            cin >> var ;
        };
        int getVaribale() const 
        {
            return var;
        };
        
        
};

int main()
{
    const Test t1;
    Test t2 ;
    
    int vart1 = t1.getVaribale() ;
    int vart2  = t2.getVaribale();
    return 0;
}
