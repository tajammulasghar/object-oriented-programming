#include <iostream>
using namespace std;

class MyArray
{
    private:
        int *arr;
        int size;
    public:
        MyArray(int s) : size(s) { arr = new int[size]; }
        MyArray(const MyArray &obj) : size(obj.size) { arr = new int[size]; for(int i=0; i<size; i++) arr[i] = obj.arr[i]; }
        ~MyArray() { delete[] arr; }
        void display() { cout << "Size: " << size << endl; }
};

int main()
{
    MyArray a(5);
    MyArray b = a;
    a.display();
    b.display();
    return 0;
}

/* Description: Deep copy constructor where a new memory block is allocated
   and values are copied. Safe as each object owns its own memory. */
