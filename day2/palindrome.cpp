#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"enter the number : ";
    cin>>n;
    int original = n;
    int lastdigit = 0;
    int rev = 0;
    while(n>0){
        lastdigit = n%10;
        rev *= 10;
        rev += lastdigit ;
        n /= 10;
    }
    if(original == rev ) cout<<"the number is palindrome";
    else cout<<"the number is not palindrome";
    return 0;
}