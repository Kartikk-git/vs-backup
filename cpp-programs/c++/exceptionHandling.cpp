#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter (numerator) A: ";
    cin >> a;
    cout << "Enter (denominator) B: ";
    cin >> b;

    try
    {
        if (b != 0)
        {
            cout << "Result: " << a / b << endl;
        }
        else
        {
            throw b;
        }
    }
    catch (int)
    {
        cout << "Division by zero is not allowed." << endl;
    }
    return 0;
}