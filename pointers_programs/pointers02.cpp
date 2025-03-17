#include<iostream>
using namespace std;

int main() {
    int var=20; // use of pointers to manipulate the value of a variable
    int *ptr=&var;

    cout<<"Initial value:"<<*ptr<<endl;
    *ptr+=10;
    cout<<"After adding 10:"<<*ptr<<endl;
    *ptr-=5;
    cout<<"After subtracting 5:"<<*ptr<<endl;
    return 0;
}