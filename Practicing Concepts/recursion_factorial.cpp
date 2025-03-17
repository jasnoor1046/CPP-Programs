#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n <= 1) // it is calles the base case
        return 1;
    else
        return n * factorial(n - 1); // it is called recursive case
}

int main()
{
    int num;
    cout << "Enter a number";
    cin >> num;
    cout << "Factorial of " << num << " is " << factorial(num) << endl;

    /*When user will enters a nummber,
    the function is called recursively.
    If n is greater than 1, it returns n multiplied by the result of calling factorial with n - 1.*/

    return 0;
}
