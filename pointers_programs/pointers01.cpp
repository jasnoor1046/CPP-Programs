#include <iostream>
using namespace std;

int main()
{
    // What is a pointer?
    //---> it is a kind of a data type that holds the addresses of the other data types,
    // for example:

    int a = 3;
    int *b;
    b = &a;
    // & --> (address of) operator

    cout << "The address of a is: " << a << endl;
    cout << "The address of b is: " << b << endl;
    // * -->(value at) Deference operator

    cout << "The value at address b is: " << *b << endl;

    // pointer to pointer
    
    int **c = &b;
    cout << "The address of b is " << &b << endl;
    cout << "The value of address c is " << c << endl;
    cout << "The value at address c is " << *c << endl;
    cout << "The value at address value_at(value_at(c)) is " << **c << endl;

    return 0;
}