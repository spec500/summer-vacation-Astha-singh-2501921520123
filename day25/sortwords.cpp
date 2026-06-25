#include <iostream>
#include <algorithm>
using namespace std;

bool compare(string a, string b) {
    return a.length() < b.length();
}

int main() {

    int n;
    cin >> n;

    string words[100];

    for(int i=0;i<n;i++)
        cin >> words[i];

    sort(words, words + n, compare);

    for(int i=0;i<n;i++)
        cout << words[i] << endl;

    return 0;
}
