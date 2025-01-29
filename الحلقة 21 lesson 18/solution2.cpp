#include <iostream>
using namespace std;
int main ()
{
    short num1 , num2 , num3;

    cout << "please enter number 1 :\n";
    cin  >> num1;
    cout << endl; 
    cout << "please enter number 2 :\n";
    cin  >> num2;
    cout << endl; 
    cout << "please enter number 3 :\n";
    cin  >> num3;
    cout << endl;

    cout << num1 << " +\n" ;
    cout << num2 << " +\n" ;
    cout << num3 << endl ;
    cout << "_____________________\n" << endl ;
    cout << "Total = " << num1 + num2 + num3 ; 
    return 0;
}