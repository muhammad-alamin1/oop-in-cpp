// assigning one object to another
#include <iostream>

using namespace std;

class Base
{
public:
    int a , b;
    void add(){
        cout << "A + B = " << a + b << endl;
    }
};

int main(void)
{
    Base obj1, obj2;

    obj1.a = 4;
    obj1.b = 5;

    obj1.add();
    obj2 = obj1;
    obj2.add();

    return 0;
}

