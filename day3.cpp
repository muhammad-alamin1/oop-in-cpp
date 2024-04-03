// default argument;
#include <iostream>
#include <chrono>

using namespace std;

class Employee
{
private:
    char* emp_name;
    unsigned int emp_join_year;
    float emp_salary;

public:
    Employee(char* _name, unsigned int _join_year, float _salary);

private:
    int worked_year();
    void print_info();

};

Employee::Employee(char* _name, unsigned int _join_year, float _salary)
{
    emp_name = _name;
    emp_join_year = _join_year;
    emp_salary = _salary;

    print_info();
}

int Employee::worked_year()
{
    unsigned int current_year, emp_wroked_year;

    auto now = chrono::system_clock::now();
    auto now_time = chrono::system_clock::to_time_t(now);
    tm* current_tm = localtime(&now_time);
    current_year = current_tm->tm_year + 1900;

    emp_wroked_year = current_year - emp_join_year;

    return emp_wroked_year;
}

void Employee::print_info()
{
    unsigned int worked_yer;

    worked_yer = worked_year();

    cout << "Employee Name:" << emp_name << endl;
    cout << "Employee Join Year: " << emp_join_year << endl;
    cout << "Employee Salary: " << emp_salary << endl;
    cout << "Employee Worked in this Company: " << worked_yer << endl;

    cout << "\n\n";
}

int main(void)
{
    Employee abdulla("Abdulla", 2000, 15000);
    Employee muhammad("Muhammad", 2014, 19500);

    return 0;
}


