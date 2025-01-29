#include <iostream>
using namespace std;
int main()
{
    /* variables */
    float a , b , area , bie = 3.14;

    /* the request of data */
    cout << "please enter a , b :\n";
    cin >> a >> b;

    /* operations */
    area = ( bie * b * b / 4 ) * ( ( 2 * a - b ) / ( 2 * a + b ) );

    /* the result */
    cout << "the area of your circle is :\n" << area;

    return 0;
}