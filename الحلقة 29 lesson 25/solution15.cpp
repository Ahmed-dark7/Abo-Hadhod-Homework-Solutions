#include <iostream>
using namespace std;
int main()
{
    // variables
    bool num1 = 1 , num2 = 0;

    // the result
    cout << num1 << " Or " << num2 << " = " << !( num1 || num2 );

    return 0;
}