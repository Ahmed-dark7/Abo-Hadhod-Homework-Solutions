#include <iostream>
using namespace std;
int main()
{
    /* variables */
    int pennies , nickles , dimes , quarters , dollers;
    float total_pennies , total_dollers;

    /* the request of data */
    cout << "please enter pennies , nickles , dimes , quarters , dollers : \n";
    cin >> pennies >> nickles >> dimes >> quarters >> dollers;

    /* operations */
    total_pennies = pennies * 1 + nickles * 5 + dimes * 10 + quarters * 25 + dollers * 100;
    total_dollers = total_pennies / 100;

    /* the result */
    cout << "total pennies = " << total_pennies << endl;
    cout << "total dollers = " << total_dollers;

    return 0;
}