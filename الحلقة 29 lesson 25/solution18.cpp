#include <iostream>
using namespace std;
int main()
{
    // variables
    short num1 , num2 , num3 , num4 , OPone , OPtwo;

    // the request of data
    cout << "please enter four numbers:\n";
    cin >> num1 >> num2 >> num3 >> num4;

    //operations
    OPone = (num1 == num2);
    OPtwo = (num3 < num4);

    // the result
    cout    << "(" << num1 << " = " <<num2 << ")"
            << " Or "
            << "(" << num3 << " < " << num4 << ")"
            << " = "
            << ( OPone || OPtwo );

    return 0;
}