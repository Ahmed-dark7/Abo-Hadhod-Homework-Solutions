#include <iostream>
using namespace std;
int main()
{
    /* variables */
    int secound;
    float minutes , hours , daies;

    /* the request of data */
    cout << "please enter the value of secound :\n";
    cin >> secound;

    /* operations */
    minutes = secound / 60;
    hours = secound / 60 / 60;
    daies = secound / 60 / 60 / 24;

    /* the result */
    cout << "minutes = " << minutes << endl;
    cout << "hours = " << hours << endl;
    cout << "daies = " << daies << endl;

    return 0;
}