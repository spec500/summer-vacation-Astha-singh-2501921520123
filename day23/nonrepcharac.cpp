#include <iostream>
using namespace std;

int main() {
    string str;
    cin >> str;

    for(int i=0;i<str.length();i++) {

        bool unique = true;

        for(int j=0;j<str.length();j++) {

            if(i!=j && str[i]==str[j]) {
                unique = false;
                break;
            }
        }

        if(unique) {
            cout << str[i];
            return 0;
        }
    }

    cout << "No non-repeating character";

    return 0;
}
