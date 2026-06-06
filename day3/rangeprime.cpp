#include <iostream>
using namespace std;
int main() {
    int initial , final;
    cin >> initial >> final;
     for (int n = initial; n <= final; n++) {
        bool isPrime = true;
        if (n <= 1)
            isPrime = false;

        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime)
            cout << n << " ";
    }
     return 0;
}