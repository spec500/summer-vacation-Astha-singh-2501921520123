#include <iostream>
using namespace std;

int main() {

    string name;
    int m1,m2,m3,m4,m5;

    cin >> name;
    cin >> m1 >> m2 >> m3 >> m4 >> m5;

    int total = m1+m2+m3+m4+m5;

    float percentage = total/5.0;

    cout << "Total = " << total << endl;
    cout << "Percentage = "
         << percentage << "%" << endl;

    if(percentage >= 40)
        cout << "Pass";
    else
        cout << "Fail";

    return 0;
}
