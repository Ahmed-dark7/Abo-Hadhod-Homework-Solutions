#include <iostream>
using namespace std;
int main()
{
    /* variables */
    float AreaOfSquare , area , bie = 3.14;

    /* the request of data */
    cout << "please enter the area of square :\n";
    cin >> AreaOfSquare;

    /* operations */
    area = ( bie * AreaOfSquare * AreaOfSquare ) / 4;

    /* the result */
    cout << "the area of your circle is :\n" << area;

    return 0;
}