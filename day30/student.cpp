#include <iostream>
using namespace std;

int main() {

    int n;

    cin >> n;

    string name[100];
    int marks[100];

    for(int i=0;i<n;i++) {
        cin >> name[i];
        cin >> marks[i];
    }

    cout << "\nRecords\n";

    for(int i=0;i<n;i++) {
        cout << name[i]
             << " "
             << marks[i]
             << endl;
    }

    return 0;
}
