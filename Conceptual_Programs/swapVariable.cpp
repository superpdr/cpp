#include <iostream>
#include <algorithm>
using namespace std;
void swapValues(int* num1, int* num2)
{
    int temp = 0;
    temp = *num1 ;
    *num1 = *num2;
    *num2 = temp;
    cout << " after swapping" <<endl;
}

// void swapValues(int& num1 , int& num2)
// {
//     int temp = num1;
//     num1 = num2 ;
//     num2 = temp;
// }

int main() {
    int a = 10 ;
    int b = 20 ;
    cout << " before swapping" <<endl;
    cout << "a = " << a << "and b = "<< b <<endl;
    swapValues( a , b);
    // swap(a,b);
    cout << "a = " << a << "and b = "<< b <<endl;
    return 0;
}
