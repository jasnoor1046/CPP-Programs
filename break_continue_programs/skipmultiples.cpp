#include<iostream>
using namespace std;

int main() {
    int skip,n;
    cout<<"Enter the limit: ";
    cin>>n;

    cout<<"Enter the number to be skip its multiples: ";
    cin>>skip;

    for(int i=1;i<=n;i++) {
        if(i%skip==0) {
        continue;
        }
        cout<<i<<" ";
    }
    cout<<endl;

    return 0;

}