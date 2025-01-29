#include <iostream>
using namespace std;
int main()
{
    short day;

    cout << "please enter the number of day :\n";
    cin >> day;

    if (day >= 1 && day <= 7) 
    {
        if (day = 1)
        {
            cout << "it's saterday" ;
        }
        else if (day = 2)
        {
            cout << "it's sunday" ;
        }
        else if (day = 3)
        {
            cout << "it's monday" ;
        }
        else if (day = 4)
        {
            cout << "it's tuesday" ;
        }
        else if (day = 5)
        {
            cout << "it's wednesday" ;
        }
        else if (day = 6)
        {
            cout << "it's thursday" ;
        }
        else
        {
            cout << "it's friday" ;
        }
    }
    else
    {
        cout << "wrong number";
    }

    return 0;
}