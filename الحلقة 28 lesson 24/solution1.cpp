#include <iostream>
using namespace std;
int main()
{
    // variables
    float num1 , num2;

    // the request of data
    cout << "please enter the first number :\n";
    cin >> num1;
    cout << "please enter the second number :\n";
    cin >> num2;
    cout << endl;

    // the result
    cout << num1 << " = " << num2 << " is : " << ( num1 == num2 ) << endl;
    cout << num1 << " != " << num2 << " is : " << ( num1 != num2 ) << endl;
    cout << num1 << " > " << num2 << " is : " << ( num1 > num2 ) << endl;
    cout << num1 << " < " << num2 << " is : " << ( num1 < num2 ) << endl;
    cout << num1 << " >= " << num2 << " is : " << ( num1 >= num2 ) << endl;
    cout << num1 << " <= " << num2 << " is : " << ( num1 <= num2 ) << endl;

    return 0;
}