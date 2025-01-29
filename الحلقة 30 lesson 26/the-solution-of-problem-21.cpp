#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    /* variables */
    float circumference , area , areaf , bie = 3.14;

    /* the request of data */
    cout << "please enter the circumference :\n";
    cin >> circumference;

    /* operations */
    area = pow(circumference,2) / ( 4 * bie );
    areaf = floor ( pow(circumference,2) / ( 4 * bie ) );

    
    /* the result */
    cout << "the area of your circle is :\n" << area;
    cout << "the final area of your circle is :\n" << areaf;

    return 0;
}