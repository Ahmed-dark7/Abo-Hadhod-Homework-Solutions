#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    /* variables */
    int secound , minutes , hours , daies;
    float total_secound , total_secoundf;

    /* the request of data */
    cout << "please enter secound , minutes , hours , daies :\n";
    cin >> secound >> minutes >> hours >> daies;

    /* operations */
    total_secound = secound + ( minutes * 60 ) + ( hours * pow ( 60 , 2 ) ) + ( daies * 24 * pow ( 60 , 2 )  );
    total_secoundf = round ( secound + ( minutes * 60 ) + ( hours * pow ( 60 , 2 ) ) + ( daies * 24 * pow ( 60 , 2 ) ) );

    /* the result */
    cout << "the total secound is : " << total_secound;
    cout << "the final total secound is : " << total_secoundf;

    return 0;
}