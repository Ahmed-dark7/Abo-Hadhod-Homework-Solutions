#include <iostream>
#include <cmath>
using namespace std;
void power()
{
    float number , power2 , power3 , power4 , power2f , power3f , power4f;
    cout << " please enter the number : \n";
    cin >> number;
    power3 = pow ( number , 2 );
    power2 = pow ( number , 3 );
    power4 = pow ( number , 4 );
    cout << " the result is :\n";
    cout << " power2 = "<< power2 << endl;
    cout << " power3 = "<< power3 << endl;
    cout << " power4 = "<< power4 << endl;
}

int main()
{
    power();
    return 0;
}