#include <iostream>
using namespace std;
int main()
{
    float num1 , num2;
    bool operation;

    cout << "please enter two numbers :\n";
    cin >> num1 >> num2;
    cout << "please enter the operation :\n";
    cin >> operation;

    if (operation = "+") 
    {
        cout << num1 + num2;
    }
    else if (operation = "-") 
    {
        cout << num1 - num2;
    }
    else if (operation = "*") 
    {
        cout << num1 * num2;
    }
    else if (operation = "/") 
    {
        cout << num1 / num2;
    }

    return 0;
}