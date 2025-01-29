#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    /* variables */
    float bie = 3.14 , diameter;

    /* the request of data */
    cout << "please enter the length of diameter : \n";
    cin >> diameter;

    /* the result */
    cout << "the area of the circle is : " << ( bie * pow (diameter,2) ) / 4;
    cout << "the final area of the circle is : " << ceil ( ( bie * pow (diameter,2) ) / 4 );

    return 0;
}