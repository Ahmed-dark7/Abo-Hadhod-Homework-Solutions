#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    /* variables */
    int secound;
    float minutes , hours , daies , minutesf , hoursf , daiesf;

    /* the request of data */
    cout << "please enter the value of secound :\n";
    cin >> secound;

    /* operations */
    minutes = secound / 60;
    hours = secound / pow ( 60 , 2 );
    daies = secound / pow ( 60 , 2 ) / 24;

    minutesf = round ( secound / 60 );
    hoursf = round ( secound / pow ( 60 , 2 ) );
    daiesf = round ( secound / pow ( 60 , 2 ) / 24 );

    /* the result */
    cout << "minutes = " << minutes << endl;
    cout << "hours = " << hours << endl;
    cout << "daies = " << daies << endl;

    cout << "final minutes = " << minutesf << endl;
    cout << "final hours = " << hoursf << endl;
    cout << "final daies = " << daiesf << endl;

    return 0;
}