#include <iostream>
using namespace std;

int main()
{

    int a, b, choice, temp;
    while (true)
    {
        // taking the values from the user
        cout << "Enter first number: ";
        cin >> a;
        cout << "Enter second number: ";
        cin >> b;
        // using temporary variable

        temp = a;
        a = b;
        b = temp;
        // to display the swapped values
        cout<<"After swapping,first number is:"<<a<<",second number: "<<b<<endl;

        cout << "Do you want to swap other pair of numbers?(Enter 1 for yes,0 for no):";
        cin >> choice;

        // break the loop if the user enters 0
        if (choice == 0)
        {
            break;
        }
    }
    cout << "Program ended. Thank you" << endl;

    return 0;
}