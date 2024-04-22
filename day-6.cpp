// parameterized constructor
#include <iostream>

using namespace std;

class Base
{
    int a, b;
public:
    Base(int a, int b){
        this->a = a;
        this->b = b;
    }
};

int main(void)
{
    Base obj(3, 2);

    return 0;
}
