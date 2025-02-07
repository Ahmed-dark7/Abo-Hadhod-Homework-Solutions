#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int num1 , num2 , result;
    cout << "please enter your number :\n";
    cin >> num1;
    cout << "please enter the power :\n";
    cin >> num2;

    for(int i = 0; i <= num2; i++)
    {
        result = pow(num1, i);
    cout << result << endl;
    }
    return 0;
}