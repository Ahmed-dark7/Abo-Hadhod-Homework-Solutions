#include <iostream>
using namespace std;
int main()
{
    /* variables */
    float d1 , d2 , d3 , average;
/* the input operation */
    cout << "please enter your three degrees :\n";
    cin >> d1;
    cin >> d2;
    cin >> d3;

/* the result */
    average = d1 + d2 + d3 / 3;
    cout << average << endl;
    if (average>50)
    {
        cout << "you pass the exam";
    }
    else
    {
        cout << "you fail in the exam";
    }

    return 0;
}