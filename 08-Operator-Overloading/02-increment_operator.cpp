#include <iostream>
using namespace std;

class Counter
{
    private:
        int v;
    public:
        Counter(int x=0): v(x) {}
        Counter operator++() { return Counter(++v); }
        int value() { return v; }
};

int main()
{
    Counter c(5);
    ++c;
    cout << c.value() << endl;
    return 0;
}

/* Description: `Counter` demonstrates overloading pre-increment operator to
   modify internal state. */
