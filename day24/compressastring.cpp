#include <iostream>
using namespace std;

int main() {
    string str;
    cin >> str;

    for(int i=0;i<str.length();) {

        int count = 1;

        while(i + count < str.length() &&
              str[i] == str[i + count]) {
            count++;
        }

        cout << str[i] << count;

        i += count;
    }

    return 0;
}
