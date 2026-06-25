#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    int arr[100];

    for(int i=0;i<n;i++)
        cin >> arr[i];

    int choice;

    cout<<"1.Sum\n2.Maximum\n";
    cin>>choice;

    if(choice==1) {

        int sum=0;

        for(int i=0;i<n;i++)
            sum+=arr[i];

        cout<<sum;
    }
    else if(choice==2) {

        int mx=arr[0];

        for(int i=1;i<n;i++) {

            if(arr[i]>mx)
                mx=arr[i];
        }

        cout<<mx;
    }

    return 0;
}
