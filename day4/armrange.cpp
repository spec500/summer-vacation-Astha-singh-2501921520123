#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int start, end;
    cin >> start >> end;

    for (int num = start; num <= end; num++) {

        int original = num;
        int temp = num;
        int digits = 0;

        // Count digits
        if (temp == 0) {
            digits = 1;
        } else {
            while (temp > 0) {
                digits++;
                temp /= 10;
            }
        }

        temp = num;  

        int sum = 0;

        
        while (temp > 0) {
            int digit = temp % 10;
            sum += pow(digit, digits);
            temp /= 10;
                }
        if (num == 0)
            sum = 0;

        if (sum == original) {
            cout << original << " ";
        }
    }

    return 0;
}