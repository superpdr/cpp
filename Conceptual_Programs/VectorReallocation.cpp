#include <iostream>
#include <vector>
using namespace std;

class Demo
{
public:
    Demo()  { cout << "Constructor\n"; }
    Demo(const Demo&) { cout << "Copy Constructor\n"; }
    Demo(Demo&&) noexcept { cout << "Move Constructor\n"; }
    ~Demo() { cout << "Destructor\n"; }
};

int main()
{
    vector<Demo> v;

    v.push_back(Demo());
    v.push_back(Demo());
    v.push_back(Demo());
}
/*
1️⃣ How many times is:

Constructor called?

Copy constructor called?

Move constructor called?

Destructor called?

///////////////////////////////////////////////////////////////////
Step-by-Step Execution
🔹 First push_back(Demo())

Temporary Demo() created → Constructor (1)

Moved into vector → Move Constructor (1)

Temporary destroyed → Destructor (1)


🔹 Second push_back(Demo())

Capacity is full → reallocation happens

Steps:

Temporary Demo() → Constructor (2)

Existing element moved to new memory → Move Constructor (2)

New element moved in → Move Constructor (3)

Old element destroyed → Destructor (2)

Temporary destroyed → Destructor (3)

🔹 Third push_back(Demo())

Again capacity exceeded → reallocation

Steps:

Temporary Demo() → Constructor (3)

First element moved → Move Constructor (4)

Second element moved → Move Constructor (5)

New element moved → Move Constructor (6)

Old elements destroyed → Destructor (4,5)

Temporary destroyed → Destructor (6)

🔹 End of main()

Vector goes out of scope:

3 elements destroyed → Destructor (7,8,9)



2️⃣ Why does std::vector reallocate?
noexcept adddresses the compiler to reallocate rather than copy 

3️⃣ What happens to existing elements during reallocation?

4️⃣ Why is noexcept important for the move constructor?

5️⃣ How would you reduce the number of moves/copies?
using the reserve keyword to reserve the space for the element 


*/
