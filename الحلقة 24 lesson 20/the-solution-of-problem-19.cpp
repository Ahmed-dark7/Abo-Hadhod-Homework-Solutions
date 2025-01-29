#include <iostream>
using namespace std;
int main()
{
    /* variables */
    float bie = 3.14 , diameter;

    /* the request of data */
    cout << "please enter the length of diameter : \n";
    cin >> diameter;

    /* the result */
    cout << "the area of the circle is : " << ( bie * diameter * diameter ) / 4;

    return 0;
}