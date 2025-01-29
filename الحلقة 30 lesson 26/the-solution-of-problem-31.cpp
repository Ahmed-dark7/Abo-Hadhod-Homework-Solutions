#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    /* variables */
    float number , power2 , power3 , power4 , power2f , power3f , power4f;

    /* the request of data */
    cout << " please enter the number : \n";
    cin >> number;

    /* operations */
    power3 = pow ( number , 2 );
    power2 = pow ( number , 3 );
    power4 = pow ( number , 4 );

    power3f = round ( pow ( number , 2 ) );
    power2f = round ( pow ( number , 3 ) );
    power4f = round ( pow ( number , 4 ) );

    /* the result */
    cout << " the result is :\n";
    cout << " power2 = "<< power2 << endl;
    cout << " power3 = "<< power3 << endl;
    cout << " power4 = "<< power4 << endl;

    cout << " the final result is :\n";
    cout << " power2 = "<< power2f << endl;
    cout << " power3 = "<< power3f << endl;
    cout << " power4 = "<< power4f << endl;

    return 0;
}