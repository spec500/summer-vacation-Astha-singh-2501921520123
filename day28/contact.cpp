#include <iostream>
using namespace std;

struct Contact {
    string name;
    string phone;
};

int main() {

    Contact c[100];
    int n;

    cin >> n;

    for(int i=0;i<n;i++) {
        cin >> c[i].name
            >> c[i].phone;
    }

    cout << "\nContacts\n";

    for(int i=0;i<n;i++) {
        cout << c[i].name
             << " "
             << c[i].phone
             << endl;
    }

    return 0;
}
