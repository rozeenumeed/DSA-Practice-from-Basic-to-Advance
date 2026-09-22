#include <iostream>
using namespace std;

void calculator(int a, int b, char opr)
{
    int ans = 0;

    switch(opr)
    {
        case '*':
            ans = a * b;
            break;

        case '/':
            ans = a / b;
            break;

        case '+':
            ans = a + b;
            break;

        case '-':
            ans = a - b;
            break;

        default:
            cout << "Operator not recognized";
            return;
    }

    cout << ans;
}

int main()
{
    calculator(2, 4, '+');

    return 0;
}
