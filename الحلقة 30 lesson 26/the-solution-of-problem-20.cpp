#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    /* variables */
    float AreaOfSquare , area , areaf , bie = 3.14;

    /* the request of data */
    cout << "please enter the area of square :\n";
    cin >> AreaOfSquare;

    /* operations */
    area = ( bie * pow (AreaOfSquare,2) ) / 4;
    areaf = ceil ( ( bie * pow (AreaOfSquare,2) ) / 4 );

    /* the result */
    cout << "the area of your circle is :\n" << area;
    cout << "the final area of your circle is :\n" << areaf;

    return 0;
}