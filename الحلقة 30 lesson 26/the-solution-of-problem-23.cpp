#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float a, b , c , p , t , area , areaf , pie = 3.14;

    cout << "please enter a , b , c :\n";
    cin >> a >> b >> c;

    p = ( a + b + c ) / 2;
    t = ( a * b * c ) / ( 4 * sqrt ( p * ( p - a ) * ( p - b ) * ( p - c ) ) );
    t = t * t;
    area = pie * t;
    areaf = round ( pie * t );

    cout << "the area of your circle is : " << area;
    cout << "the final area of your circle is : " << areaf;

    return 0;
}