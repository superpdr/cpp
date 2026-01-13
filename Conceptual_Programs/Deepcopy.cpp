#include <iostream>
using namespace std;

class Demo
{
private:
    int* data;
    int size;

public:
    // Constructor
    Demo(int n) : size(n)
    {
        data = new int[size];
        for (int i = 0; i < size; i++)
            data[i] = i + 10;
    }

    // Destructor
    ~Demo()
    {
        delete[] data;
    }

    // Copy Constructor (Deep Copy)
    Demo(const Demo& other) : size(other.size)
    {
        data = new int[size];
        for (int i = 0; i < size; i++)
            data[i] = other.data[i];
    }

    // Copy Assignment Operator (Deep Copy + Self-check)
    Demo& operator=(const Demo& other)
    {
        if (this != &other)
        {
            delete[] data;

            size = other.size;
            data = new int[size];

            for (int i = 0; i < size; i++)
                data[i] = other.data[i];
        }
        return *this;
    }

    void setValue(int idx, int value)
    {
        data[idx] = value;
    }

    void print()
    {
        for (int i = 0; i < size; i++)
            cout << data[i] << " ";
        cout << endl;
    }
};

int main()
{
    Demo a(5);
    Demo b = a;          // Copy constructor

    b.setValue(0, 100);

    cout << "a: ";
    a.print();           // unchanged
    cout << "b: ";
    b.print();           // modified

    return 0;
}
