#include <iostream>
using namespace std;

int main() {

    double balance = 10000;
    int choice;
    double amount;

    cout<<"1.Deposit\n2.Withdraw\n";
    cin>>choice;

    if(choice==1) {
        cin>>amount;
        balance += amount;
    }
    else if(choice==2) {

        cin>>amount;

        if(amount<=balance)
            balance -= amount;
        else
            cout<<"Insufficient Balance";
    }

    cout<<"\nBalance = "<<balance;

    return 0;
}
