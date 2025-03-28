#include <iostream>
using namespace std;

int printSpaces(int limit, int indexStart = 0)
{
    if (indexStart >= limit)
        return 0;
    cout << " ";
    return printSpaces(limit, indexStart + 1);
}

int printHex(int x, int spaces, int midspaces, int counter = 1, int a = 0, int b = 1)
{
    // Base condition
    if (counter >= 3 * x - 2)
    {
        printSpaces(spaces);
        cout << a;
        return 0;
    }

    // Printing initial spaces
    printSpaces(spaces);

    if (counter == 1)
        cout << "1" << endl;

    // Printing numbers with their mid spaces
    if (counter != 1)
    {
        int temp = a + b; // Fibonacci update
        a = b;
        b = temp;

        cout << b;
        printSpaces(midspaces);
        cout << b << endl;
    }

    if (counter < x)
    {
        return printHex(x, spaces - x, (midspaces) + 2 * x, ++counter, a, b);
    }
    else if (counter >= x && counter < 2 * x - 1)
    {
        return printHex(x, spaces, (midspaces), ++counter, a, b);
    }
    else
    {
        return printHex(x, spaces + x, midspaces - 2 * x, ++counter, a, b);
    }
}

int main()
{
    int x;
    cout << "Enter the value: ";
    cin >> x;
    printHex(x, (x - 1) * x, 0);
    return 0;
}
