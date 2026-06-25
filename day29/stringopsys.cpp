#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    string str;

    cin >> str;

    int choice;

    cout<<"1.Length\n2.Reverse\n";
    cin>>choice;

    if(choice==1)
        cout<<str.length();

    else if(choice==2) {

        reverse(str.begin(),
                str.end());

        cout<<str;
    }

    return 0;
}
