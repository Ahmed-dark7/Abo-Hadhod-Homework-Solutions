#include <iostream>
#include <cmath>
using namespace std;
float power()
{
    float num;
    short power;
    cout << "please enter the value of the number and the power :\n";
    cin >> num >> power;
    return num = pow ( num , power );
}

int main()
{
    cout << "the result is : " << power();
    return 0;
}