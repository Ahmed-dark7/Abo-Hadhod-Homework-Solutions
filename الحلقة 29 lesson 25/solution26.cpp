#include <iostream>
using namespace std;
int main()
{
    //variables
    short num1 , num2 , num3 , num4 , num5 , num6 , num7 , num8 , OPone , OPtwo , OPthree , OPfour;
    bool t = 1 , f = 0;

    // the request of data
    cout << "please enter eight numbers:\n";
    cin >> num1 >> num2 >> num3 >> num4 >> num5 >> num6 >> num7 >> num8;

    //operations
    OPone = (num1 > num2);
    OPtwo = (num3 <= num4);
    OPthree = (num5 > num6);
    OPfour = (num7 <= num8);

    // the result
    cout    << "(" << "(" << num1 << " > " << num2
            << " and "
            << num3 << " <= " << num4 << ")"
            << " Or "
            << "(" << num5 << " > " << num6
            << " and "
            << num7 << " <= " << num8 << ")" << ")"
            << " and " << "True = "
            << (( OPone && OPtwo ) || ( OPthree && OPfour )) && t;

    return 0;
}