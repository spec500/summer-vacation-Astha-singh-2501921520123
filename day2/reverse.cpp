#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"enter the number: ";
    cin>>n;
    int lastdigit = 0;
    int rev = 0;
    while(n>0){
        lastdigit = n%10;
        rev *= 10;
        rev += lastdigit ;
        n /= 10;
    }
    cout<<rev;
    return 0;
}