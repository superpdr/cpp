#include <iostream>
using namespace std;

class Demo {
private:
    int* var;   // 🔥 owning raw pointer

public:
    // 1️⃣ Constructor
    Demo(int value = 0) {
        var = new int(value);
    }

    // 2️⃣ Destructor
    ~Demo() {
        delete var;
    }

    // 3️⃣ Copy Constructor (Deep Copy)
    Demo(const Demo& other) {
        var = new int(*other.var);
    }

    // 4️⃣ Copy Assignment Operator (Deep Copy)
    Demo& operator=(const Demo& other) {
        if (this != &other) {          // self-assignment check
            delete var;                // clean old resource
            var = new int(*other.var); // deep copy
        }
        return *this;
    }

    int get() const {
        return *var;
    }
};

int main()
{
  Demo d1(10);   // heap alloc #1
Demo d2 = d1; // heap alloc #2 (deep copy)
d2 = d1;      // delete old, allocate new

  return 0 ;
}
