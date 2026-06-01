#include<iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;
    int fact = 1;
    if(n == 0)  cout << "The factorial of 0 is 1";
    else {
        for(int i = 1; i <= n; i++) {
            fact = fact * i;
        }
        cout << "The factorial of the given number is " << fact;
    }
    return 0;
}