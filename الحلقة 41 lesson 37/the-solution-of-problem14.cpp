#include <iostream>
using namespace std;
void transfer(int &num1 , int &num2)
{
    int transfer;
    cout << "please enter number 1 : \n";
    cin >> num1;
    cout << "please enter number 2 : \n";
    cin >> num2;

    cout << num1 << "   " << num2 << endl;

    transfer = num1;
    num1 = num2;
    num2 = transfer;
    cout << num1 << "   " << num2;
}

int main()
{
    int num1 , num2;
    num1 =8;
    num2 = 0;
    transfer(num1 , num2 );
    cout << num1 << num2;
    cin >> num1;
    return 0;
}