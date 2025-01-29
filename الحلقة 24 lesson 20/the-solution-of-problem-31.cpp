#include <iostream>
using namespace std;
int main()
{
    /* variables */
    float number , power2 , power3 , power4;

    /* the request of data */
    cout << " please enter the number : \n";
    cin >> number;

    /* operations */
    power2 = number * number;
    power3 = number * number * number;
    power4 = number * number * number * number;

    /* the result */
    cout << " the result is :\n";
    cout << " power2 = "<< power2 << endl;
    cout << " power3 = "<< power3 << endl;
    cout << " power4 = "<< power4 << endl;

    return 0;
}