#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    /* variables */
    float a , b , area , areaf , bie = 3.14;

    /* the request of data */
    cout << "please enter a , b :\n";
    cin >> a >> b;

    /* operations */
    area = ( bie * pow (b,2) / 4 ) * ( ( 2 * a - b ) / ( 2 * a + b ) );
    areaf = floor ( ( bie * pow (b,2) / 4 ) * ( ( 2 * a - b ) / ( 2 * a + b ) ) );

    /* the result */
    cout << "the area of your circle is :\n" << area;
    cout << "the final area of your circle is :\n" << areaf;

    return 0;
}