#include <iostream>
using namespace std;
int glo = 6;
int sum()
{
    int a;
    cout << glo;
}

int main()
{
    int glo = 9;
    glo = 78;
    int a = 14, b = 15;
    float pi = 3.14;
    char c = 'd';
    bool is_true = false;

    sum();
    cout << glo << is_true;

    // cout<<"This is a program for variables.\nHere the value of a is "<<a<<".\nThe value of b is "<<b;
    // cout<<"\nThe value of pi is: "<<pi;
    // cout<<"\nThe value of c is: "<<c;
    return 0;
}