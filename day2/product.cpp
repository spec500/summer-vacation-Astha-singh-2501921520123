#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number: ";
    cin>>n;
    int pro = 1 ;
    int lastdigit = 0;
    while(n>0){
        lastdigit = n%10;
        pro *= lastdigit ;
        n /= 10;
    }
    cout<<pro;
    return 0;
}