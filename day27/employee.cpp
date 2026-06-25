#include <iostream>
using namespace std;

struct Employee {
    int id;
    string name;
    float salary;
};

int main() {

    Employee emp[100];
    int n;

    cin >> n;

    for(int i=0;i<n;i++) {
        cin >> emp[i].id
            >> emp[i].name
            >> emp[i].salary;
    }

    cout << "\nEmployee Details\n";

    for(int i=0;i<n;i++) {
        cout << emp[i].id << " "
             << emp[i].name << " "
             << emp[i].salary << endl;
    }

    return 0;
}
