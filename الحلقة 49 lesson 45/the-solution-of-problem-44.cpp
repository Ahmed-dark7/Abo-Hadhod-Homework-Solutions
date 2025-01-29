#include <iostream>
using namespace std;
int main()
{
    short day;

    cout << "please enter the number of day :\n";
    cin >> day;

    switch (day) 
    {
        case 1:
            cout << "it's saterday" ;
            break;
        case 2:
            cout << "it's sunday" ;
            break;
        case 3:
            cout << "it's monday" ;
            break;
        case 4:
            cout << "it's tuesday" ;
            break;
        case 5:
            cout << "it's wednesday" ;
            break;
        case 6:
            cout << "it's thursday" ;
            break;
        case 7:
            cout << "it's friday" ;
            break;
        default :
            cout << "wrong number";
    }

    return 0;
}