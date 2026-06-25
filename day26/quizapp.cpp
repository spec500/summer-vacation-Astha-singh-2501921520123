#include <iostream>
using namespace std;

int main() {

    int score = 0;
    char ans;

    cout << "Capital of India?\n";
    cout << "a) Delhi\nb) Mumbai\n";

    cin >> ans;

    if(ans == 'a')
        score++;

    cout << "Score = " << score;

    return 0;
}
