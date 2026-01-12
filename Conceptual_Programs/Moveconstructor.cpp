#include <iostream>
using namespace std;

class Demo {
private:
    int* var;

public:
    // Constructor
    Demo(int a = 0) {
        var = new int(a);
    }

    // Destructor
    ~Demo() {
        delete var;
    }

    // Copy Constructor
    Demo(const Demo& other) {
        var = new int(*other.var);
    }

    // Copy Assignment
    Demo& operator=(const Demo& other) {
        if (this != &other) {
            delete var;
            var = new int(*other.var);
        }
        return *this;
    }

    // 🔥 Move Constructor
    Demo(Demo&& other) noexcept {
        var = other.var;
        other.var = nullptr;
    }

    // 🔥 Move Assignment
    Demo& operator=(Demo&& other) noexcept {
        if (this != &other) {
            delete var;
            var = other.var;
            other.var = nullptr;
        }
        return *this;
    }
};
