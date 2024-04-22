// bitwise copy
#include <iostream>
#include <cstring>

using namespace std;

class Student
{
    private:
        char name[15];
        char id[10];
        float cgpa;
    public:
        void get_info(char* name, char* id, float cgpa){
            strcpy(this->name, name);
            strcpy(this->id, id);
            this->cgpa = cgpa;
        }
        void show_info(void){
            cout << "Name: " << name << endl;
            cout << "ID: " << id << endl;
            cout << "CGPA: " << cgpa << endl;

            cout << endl;
        }
};

int main(void)
{
    Student s1, s2;

    s1.get_info("Muhammad", "345634564", 3.90);
    s2 = s1;
    s1.show_info();
    s2.show_info();

    return 0;
}


