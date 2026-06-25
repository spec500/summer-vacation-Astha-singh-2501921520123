#include <iostream>
using namespace std;

int main() {

    string books[5] =
    {"C++","Java","Python","DSA","DBMS"};

    cout << "Library Books\n";

    for(int i=0;i<5;i++)
        cout << books[i] << endl;

    return 0;
}
