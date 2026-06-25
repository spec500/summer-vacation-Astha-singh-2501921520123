#include <iostream>
using namespace std;

struct Student {
    int roll;
    string name;
    float marks;
};

int main() {

    Student s[100];
    int n;

    cout << "Enter Number of Students: ";
    cin >> n;

    for(int i=0;i<n;i++) {
        cout << "Enter Roll, Name, Marks: ";
        cin >> s[i].roll >> s[i].name >> s[i].marks;
    }

    cout << "\nStudent Records\n";

    for(int i=0;i<n;i++) {
        cout << s[i].roll << " "
             << s[i].name << " "
             << s[i].marks << endl;
    }

    return 0;
}
