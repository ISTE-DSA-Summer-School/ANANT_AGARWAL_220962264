#include <iostream>
using namespace std;

int main()
{
    int a, b, result;
    char operand;

    cout << "enter numbers a and b" << endl;
    cin >> a >> b;

    cout << "enter operand:";
    cin >> operand;

    if (operand == '+')
    {
        result = a + b;
        cout << result;
    }
    if (operand == '*')
    {
        result = a * b;
        cout << result;
    }
    if (operand == '-')
    {
        result = a - b;
        cout << result;
    }
    if (operand == '/')
    {
        float(result) = a / float(b);
        cout << result;
    }

    return 0;
}
