#include <iostream>
using namespace std;

// Function to calculate factorial
int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

// Function to reverse a number
int reverseNumber(int n)
{
    int reversed = 0;
    while (n != 0)
    {
        int digit = n % 10;               // Extract last digit
        reversed = reversed * 10 + digit; // Add digit to reversed number
        n /= 10;                          // Remove last digit
    }
    return reversed;
}
int main()
{
    int choice, number;

    cout << "Enter your choice:\n";
    cout << "1. Calculate Factorial\n";
    cout << "2. Reverse the Number\n";
    cin >> choice;

    switch (choice)
    {
    case 1:
    {
        cout << "Enter a number to find its factorial: ";
        cin >> number;
        if (number < 0)
        {
            cout << "Factorial of negative numbers is not defined!" << endl;
        }
        else
        {
            cout << "Factorial of " << number << " is " << factorial(number) << endl;
        }
        break;
    }
    case 2:
    {
        cout << "Enter a number to reverse: ";
        cin >> number;
        cout << "The reverse of " << number << " is " << reverseNumber(number) << endl;
        break;
    }
    default:
        cout << "Invalid choice! Please select either 1 or 2." << endl;
    }
    return 0;
}
