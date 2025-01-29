#include <iostream>
using namespace std;
int main()
{
    /* variables */
    int secound , minutes , hours , daies;
    float total_secound;

    /* the request of data */
    cout << "please enter secound , minutes , hours , daies :\n";
    cin >> secound >> minutes >> hours >> daies;

    /* operations */
    total_secound = secound + ( minutes * 60 ) + ( hours * 60 * 60 ) + ( daies * 24 * 60 * 60 );

    /* the result */
    cout << "the total secound is : " << total_secound;

    return 0;
}