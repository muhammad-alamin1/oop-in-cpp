// friend function
// error this code
#include <iostream>

using namespace std;

class Derive;
class Base
{
    int a;
public:
    Base():a(0){};
    friend void get_data(Base ob);
};

class Derive
{
private:
    int b, res;

public:
    Derive(){
        b = 5;
    }
    void get_data(Base ob){
        res = ob.a + b;
    }

    void show(){
        cout << "Data: " << res << endl;
    }
};

int main(void)
{
    Base obj;
    Derive ob;

    ob.get_data(obj);
    ob.show();

    return 0;
}

