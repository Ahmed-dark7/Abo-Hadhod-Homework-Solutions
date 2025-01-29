#include <iostream>
using namespace std;
int main()
{
    /* variables */
    float d1 , d2 , d3;

    /* the input operation */
    cout << "please enter your three degrees :\n";
    cin >> d1;
    cin >> d2;
    cin >> d3;

    /* the result */
    cout << "the average is :  " << d1 + d2 + d3 / 3;

    return 0;
}