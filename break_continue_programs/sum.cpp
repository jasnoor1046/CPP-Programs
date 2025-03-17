#include <iostream>
using namespace std;

int main()
{
    int num, sum = 0;

    while (true)
    {
        cout << "Enter a number: ";
        cin >> num;
        if (num < 0)
        {
            break;
        }
        if (num == 0)
        {
            continue;
        }
        sum += num;
    }
    cout << "The sum of the entered numbers is: " << sum << endl;

    return 0;
}