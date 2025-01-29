#include <iostream>
#include <cmath>
using namespace std;
float t_secound()
{
    int secound , minutes , hours , daies;
    float total_secound;
    cout << "please enter secound , minutes , hours , daies :\n";
    cin >> secound >> minutes >> hours >> daies;
    return total_secound = secound + ( minutes * 60 ) + ( hours * pow ( 60 , 2 ) ) + ( daies * 24 * pow ( 60 , 2 )  );
}

int main()
{
    cout << "the total secound is : " << t_secound();
    return 0;
}