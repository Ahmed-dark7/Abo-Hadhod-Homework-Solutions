#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float num;
    short power , numf;

    cout << "please enter the value of the number and the power :\n";
    cin >> num >> power;

    num = pow ( num , power );
    numf = round ( pow ( num , power ) );

    cout << "the result is : " << num;
    cout << "the final result is : " << numf;

    return 0;
}