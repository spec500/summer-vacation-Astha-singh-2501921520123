#include <iostream>
using namespace std;

void display(string name[],
             int marks[],
             int n) {

    for(int i=0;i<n;i++) {

        cout << name[i]
             << " "
             << marks[i]
             << endl;
    }
}

int main() {

    int n;

    cin >> n;

    string name[100];
    int marks[100];

    for(int i=0;i<n;i++) {
        cin >> name[i];
        cin >> marks[i];
    }

    display(name, marks, n);

    return 0;
}
