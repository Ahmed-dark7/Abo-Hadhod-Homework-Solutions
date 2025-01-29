#include <iostream>
using namespace std;
int main()
{
    /* variables */
    float loan_amount;
    int monthly_installment , total_months;

    /* the request of data */
    cout << "please enter the value of loan amount and number of months :\n";
    cin >> loan_amount >> total_months;

    /* operations */
    monthly_installment = loan_amount / monthly_installment;

    /* the result */
    cout << "the value of monthly installment is : " << monthly_installment;

    return 0;
}