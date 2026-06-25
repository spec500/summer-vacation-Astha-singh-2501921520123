#include <iostream>
using namespace std;

int main() {

    string str1, str2;

    cin >> str1 >> str2;

    for(char ch : str1) {

        if(str2.find(ch) != string::npos)
            cout << ch << " ";
    }

    return 0;
}
