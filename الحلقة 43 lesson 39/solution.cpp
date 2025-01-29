#include <iostream>
using namespace std;
int main()
{
    float grades[3];

    cout << "please enter grade1 :\n";
    cin >> grades[0];

    cout << "please enter grade2 :\n";
    cin >> grades[1];

    cout << "please enter grade3 :\n";
    cin >> grades[2];

    cout << "**************************";

    cout << "the average of grades is : " << (grades[0] + grades[1] + grades[2])/3 ;
    
    return 0;
}