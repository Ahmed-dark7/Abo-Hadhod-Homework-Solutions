#include <iostream>
using namespace std;
int main()
{
    short month;

    cout << "please enter the number of month :\n";
    cin >> month;

    if (month >= 1 && month <= 12) 
    {
        if (month = 1)
        {
            cout << "January" ;
        }
        else if (month = 2)
        {
            cout << "February" ;
        }
        else if (month = 3)
        {
            cout << "march" ;
        }
        else if (month = 4)
        {
            cout << "april" ;
        }
        else if (month = 5)
        {
            cout << "may" ;
        }
        else if (month = 6)
        {
            cout << "june" ;
        }
        else if (month = 7)
        {
            cout << "july" ;
        }
        else if (month = 8)
        {
            cout << "august" ;
        }
        else if (month = 9)
        {
            cout << "september" ;
        }
        else if (month = 10)
        {
            cout << "october" ;
        }
        else if (month = 11)
        {
            cout << "november" ;
        }
        else
        {
            cout << "december";
        }
    }
    else
    {
        cout << "wrong number";
    }

    return 0;
}