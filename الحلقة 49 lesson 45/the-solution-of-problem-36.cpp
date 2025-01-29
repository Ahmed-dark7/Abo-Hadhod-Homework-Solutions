#include <iostream>
using namespace std;
int main()
{
    float num1 , num2;
    char operation;

    cout << "please enter two numbers :\n";
    cin >> num1 >> num2;
    cout << "please enter the operation :\n";
    cin >> operation;

    switch (operation) 
    {
        case '+' :
            cout << num1 + num2;
            break;
        case '-' :
            cout << num1 - num2;
            break;
        case '*' :
            cout << num1 * num2;
            break;
        case '/' : 
            cout << num1 / num2;
            break;
        default :
            cout << "wrong operation";
    }

    return 0;
}