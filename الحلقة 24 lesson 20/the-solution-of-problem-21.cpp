#include <iostream>
using namespace std;
int main()
{
    /* variables */
    float circumference , area , bie = 3.14;

    /* the request of data */
    cout << "please enter the circumference :\n";
    cin >> circumference;

    /* operations */
    area = ( circumference * circumference ) / ( 4 * bie );

    
    /* the result */
    cout << "the area of your circle is :\n" << area;

    return 0;
}