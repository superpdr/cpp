#include <isotream>
using namespace std;

/*


static Keyword in C++
The static keyword in C++ is used for various purposes, depending on where it is applied. It’s primarily concerned with the lifetime and scope of variables, and it can be applied to variables, functions, and class members.

1. static Variables:
When static is applied to a variable, it alters the variable’s lifetime but not its scope.

Inside a function: A static variable inside a function maintains its value across function calls. Its lifetime is the entire execution of the program (i.e., it’s created only once), but its scope is still local to the function.

#include <iostream>

void counter() {
    static int count = 0; // This variable retains its value between calls
    std::cout << "Count: " << count++ << std::endl;
}

int main() {
    counter(); // Output: Count: 0
    counter(); // Output: Count: 1
    counter(); // Output: Count: 2
}
Global static variables: A static variable at global scope (outside any function) limits its visibility to the current translation unit (i.e., the current .cpp file). This means it cannot be accessed from other files, even if they are linked together.

static int globalVar = 10; // This can only be accessed in this file

void foo() {
    std::cout << globalVar << std::endl;
}

2. static Functions:
When static is applied to functions, it limits the function's visibility to the current translation unit. In other words, the function can’t be accessed by other files, even if they are linked together.

// File1.cpp
static void helper() {
    std::cout << "This is a static helper function" << std::endl;
}

void callHelper() {
    helper(); // works fine within the same file
}

// File2.cpp
void anotherFunction() {
    helper(); // Error: helper is not visible here because it's static in File1.cpp
}

3. Static Member Variables in Classes:
A static member variable of a class is shared among all instances of that class. It’s not tied to any particular instance but to the class itself.

It can be accessed using the class name or through an object.

#include <iostream>
using namespace std;

class MyClass {
public:
    static int count;  // Declare static member variable

    MyClass() {
        count++;
    }
    
    static void showCount() {
        cout << "Count: " << count << endl;
    }
};

int MyClass::count = 0; // Define static member variable outside the class

int main() {
    MyClass a, b;
    MyClass::showCount(); // Output: Count: 2
    return 0;
}



4. Linkage and Static:
Internal linkage refers to variables or functions that are limited to a specific translation unit (i.e., file). These are usually declared as static at the global level.

External linkage refers to variables or functions that can be accessed across multiple translation units (i.e., files). By default, global variables and functions have external linkage unless declared as static.


*/