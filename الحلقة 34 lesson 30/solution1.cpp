#include <iostream>
using namespace std;
int main()
{
    string st1 = "43.22";

    int numi = stoi ( st1 );
    float numf = stof ( st1 );
    double numd = stod ( st1 );

    cout << numi << endl;
    cout << numf << endl;
    cout << numd;

    return 0;
}