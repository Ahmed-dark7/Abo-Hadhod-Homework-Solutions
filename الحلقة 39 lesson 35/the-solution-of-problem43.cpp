#include <iostream>
#include <cmath>
using namespace std;
void time()
{
    int secound;
    float minutes , hours , daies;
    cout << "please enter the value of secound :\n";
    cin >> secound;
    minutes = secound / 60;
    hours = secound / pow ( 60 , 2 );
    daies = secound / pow ( 60 , 2 ) / 24;
    cout << "minutes = " << minutes << endl;
    cout << "hours = " << hours << endl;
    cout << "daies = " << daies << endl;
}

int main()
{
    time();
    return 0;
}