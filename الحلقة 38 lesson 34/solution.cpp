#include <iostream>
using namespace std;

void number()
{
    int num1 , num2;
    cout << "Please enter Number1?";
    cin >> num1;
    cout << endl;
    cout << "Please enter Number2?";
    cin >> num2;
    cout << endl;
    cout << "******************************\n";
    cout << num1 + num2;
}

int numberf()
{
    int num1 , num2;
    cout << "Please enter Number1?";
    cin >> num1;
    cout << endl;
    cout << "Please enter Number2?";
    cin >> num2;
    cout << endl;
    cout << "******************************\n";
    return num1 + num2;
}

int main()
{
    number();

    cout << numberf();


    return 0;
}