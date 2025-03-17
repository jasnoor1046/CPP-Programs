#include <iostream>
using namespace std;

int fibonacci(int n)
{
    if (n <= 1)
    {
        return n; // Base case
    }
    return fibonacci(n - 1) + fibonacci(n - 2); // Recursive call
}

int main()
{
    int num;
    cout << "Enter the number of terms: ";
    cin >> num;

    cout << "Fibonacci sequence: ";
    for (int i = 0; i < num; i++)
    {
        cout << fibonacci(i) << " ";
    }
    return 0;
}
