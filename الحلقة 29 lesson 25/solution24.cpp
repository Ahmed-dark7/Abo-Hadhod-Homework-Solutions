#include <iostream>
using namespace std;
int main()
{
    //variables
    short num1 , num2 , num3 , num4 , OPone , OPtwo ;
    bool t = 1 , f = 0;

    // the request of data
    cout << "please enter four numbers:\n";
    cin >> num1 >> num2 >> num3 >> num4;

    //operations
    OPone = (num1 > num2);
    OPtwo = (num3 == num4);

    // the result
    cout    << "Not"
            << "(" << num1 << " > " << num2
            << " and "
            << num3 << " = " << num4 << ")"
            << " Or " << "Not "
            << "(" << t
            << " Or "
            << f << ")"
            << ( ! ( OPone && OPtwo ) ) || ( ! ( t || f ) );

    return 0;
}