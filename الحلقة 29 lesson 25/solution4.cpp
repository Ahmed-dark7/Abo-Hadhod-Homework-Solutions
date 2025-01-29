#include <iostream>
using namespace std;
int main()
{
    // variables
    short num1 , num2;

    // the request of data
    cout << "please enter number 1 and number 2 :\n";
    cin >> num1 >> num2;

    // the result
    cout << num1 << " = " << num2 << " = " << ( num1 == num2 );

    return 0;
}