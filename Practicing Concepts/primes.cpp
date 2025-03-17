#include <iostream>
using namespace std;

// this function checks whether the nummber is prime
bool isPrime(int n)
{
    if (n <= 1)
    {
        return false;
    }
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n1, n2;

    // taking the input from the user
    cout << "Enter the lower limit: ";
    cin >> n1;
    cout << "Enter the upper limit: ";
    cin >> n2;

    cout << "Prime numbers between" << n1 << "and" << n2 << "are:" << endl;

    for (int i = n1; i <= n2; ++i)
    {
        if (isPrime(i))
        {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}