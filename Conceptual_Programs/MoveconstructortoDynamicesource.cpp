#include <iostream>
using namespace std;

class Buffer
{
private:
    int* data;
    size_t size;

public:
    Buffer(size_t n) : size(n)
    {
        data = new int[size];
        cout << "Constructor\n";
    }

    ~Buffer()
    {
        delete[] data;
        cout << "Destructor\n";
    }

    // Copy constructor
    Buffer(const Buffer& other) : size(other.size)
    {
        data = new int[size];
        for (size_t i = 0; i < size; i++)
            data[i] = other.data[i];
        cout << "Copy Constructor\n";
    }

    // Copy assignment
    Buffer& operator=(const Buffer& other)
    {
        if (this != &other)
        {
            delete[] data;
            size = other.size;
            data = new int[size];
            for (size_t i = 0; i < size; i++)
                data[i] = other.data[i];
        }
        cout << "Copy Assignment\n";
        return *this;
    }
    
 // Move Constructor
Buffer(Buffer&& other) noexcept
    : data(other.data), size(other.size)
{
    other.data = nullptr;
    other.size = 0;
    cout << "Move Constructor\n";
}

// Move Assignment Operator
Buffer& operator=(Buffer&& other) noexcept
{
    if (this != &other)
    {
        delete[] data;          // release current resource

        data = other.data;      // steal resource
        size = other.size;

        other.data = nullptr;   // neutralize source
        other.size = 0;
    }
    cout << "Move Assignment\n";
    return *this;
}
    
    
};


int main()
{
    return 0;
}
