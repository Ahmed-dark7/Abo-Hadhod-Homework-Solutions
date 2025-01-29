#include <iostream>
using namespace std;
int main()
{
    /* variables*/
    float total_bill , services , sales;

    /* the request of data */
    cout << "please enter the value of total bill :\n";
    cin >> total_bill;

    /* operations */
    services = total_bill * ( 10 / 100 );
    sales = total_bill * ( 16 / 100 );
    total_bill = total_bill + services + sales;

    /* the result */
    cout << "the value of total bill is : " << total_bill;

    return 0;
}