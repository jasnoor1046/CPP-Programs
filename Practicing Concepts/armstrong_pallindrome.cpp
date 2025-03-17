#include <iostream>
#include <cmath> // For the pow() function
using namespace std;

// Function to check if a number is an Armstrong number
bool isArmstrong(int n)
{
    int original = n, sum = 0;
    int digits = 0;
    while (n != 0)
    {
        n /= 10;
        digits++;
    }

    n = original; // Reset n to original value

    // Calculate the sum of powers of digits
    while (n != 0)
    {
        int digit = n % 10;        // Extract last digit
        sum += pow(digit, digits); // it will raise the digit to the power of digits
        n /= 10;                   // to remove the last digit from the number to get the updated value of n for further calculation
    }

    return (sum == original); // Check if the sum equals the original number
}

// Function to check if a number is a Palindrome
bool isPalindrome(int n)
{
    int original = n, reversed = 0;

    // Reverse the number
    while (n != 0)
    {
        int digit = n % 10;               // Extract last digit
        reversed = reversed * 10 + digit; // Build reversed number
        n /= 10;                          // Remove last digit
    }

    return (reversed == original); // Check if reversed is equal to original
}

int main()
{
    int choice, number;

    cout << "Enter your choice:\n";
    cout << "1. Check if a number is Armstrong\n";
    cout << "2. Check if a number is Palindrome\n";
    cin >> choice;

    switch (choice)
    {
    case 1:
    {
        cout << "Enter a number to check if it's Armstrong: ";
        cin >> number;
        if (isArmstrong(number))
        {
            cout << number << " is an Armstrong number!" << endl;
        }
        else
        {
            cout << number << " is not an Armstrong number." << endl;
        }
        break;
    }
    case 2:
    {
        cout << "Enter a number to check if it's Palindrome: ";
        cin >> number;
        if (isPalindrome(number))
        {
            cout << number << " is a Palindrome!" << endl;
        }
        else
        {
            cout << number << " is not a Palindrome." << endl;
        }
        break;
    }
    default:
        cout << "Invalid choice! Please select either 1 or 2." << endl;
    }

    return 0;
}
