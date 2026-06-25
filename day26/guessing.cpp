#include <iostream>
using namespace std;

int main() {

    int secret = 25;
    int guess;

    do {
        cout << "Enter Guess: ";
        cin >> guess;

        if(guess > secret)
            cout << "Too High\n";
        else if(guess < secret)
            cout << "Too Low\n";

    } while(guess != secret);

    cout << "Correct Guess";

    return 0;
}
