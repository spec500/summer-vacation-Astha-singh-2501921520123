#include <iostream>
using namespace std;

struct Employee {
    string name;
    float basicSalary;
};

int main() {

    Employee e;

    cin >> e.name;
    cin >> e.basicSalary;

    float hra = e.basicSalary * 0.20;
    float da = e.basicSalary * 0.10;

    float totalSalary = e.basicSalary + hra + da;

    cout << "Total Salary = "
         << totalSalary;

    return 0;
}
