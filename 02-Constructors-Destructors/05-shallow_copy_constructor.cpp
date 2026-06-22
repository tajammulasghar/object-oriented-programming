#include <iostream>
using namespace std;

class MyArray
{
    private:
        int *arr;
        int size;
    public:
        MyArray(int s) : size(s) { arr = new int[size]; }
        MyArray(const MyArray &obj) { arr = obj.arr; size = obj.size; }
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

/* Description: Shallow copy constructor where both objects share the same
   pointer. Dangerous as both destructors try to free the same memory. */
