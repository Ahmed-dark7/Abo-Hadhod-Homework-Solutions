#include <iostream>
using namespace std;
int main()
{
    int num, factorial = 1;
    cout << "please enter your number :\n";
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        factorial *= i;
    }
    cout << factorial;
    return 0;
}