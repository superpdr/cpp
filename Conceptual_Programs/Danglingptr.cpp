#include <iostream>
using namespace std;


int main()
{
    int* ptr ;
    int a = 0 ;
    ptr = &a ; 
    /// this is condition for the dangling pointer 
    
//     ✅ This is NOT a dangling pointer

// Why:

// a is alive

// ptr points to a valid stack variable

// Lifetime of a has not ended

// So this is a valid pointer.
    
    // with modern c++ 
    
    int* ptr1 = new int ;
    *ptr1 = 10 ;
    delete ptr1 ;
    
//     ⚠️ THIS creates a dangling pointer

// Why:

// new int allocates memory on the heap

// delete ptr1 frees that memory

// ptr1 still holds the old address

// That address is now invalid
    return 0;
}
