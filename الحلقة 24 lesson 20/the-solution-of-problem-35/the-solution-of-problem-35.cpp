#include <iostream>
using namespace std;
int main()
{
    /* variables */
    float cent;
    float pound;

    /* the request of data */
    cout << " please enter the number of cent : \n";
    cin >> cent;

    /* operations */
    pound = cent / 100;

    /* the result */
    cout << " the result is :\n";
    cout << " the number of cent : " << cent << endl;
    cout << " the number of pound : " << pound;

    return 0;
}