#include <iostream>
using namespace std;
int main()
{
    int daies, hours, minutes;

    cout << "please enter daies :\n";
    cin >> daies;
    cout << "please enter hours :\n";
    cin >> hours;
    cout << "please enter minutes :\n";
    cin >> minutes;

    daies = daies * 24 * 60 *60;
    hours = hours * 60 * 60;
    minutes = minutes * 60;
    cout << "the result is : " << daies + hours + minutes; 
    return 0;
}