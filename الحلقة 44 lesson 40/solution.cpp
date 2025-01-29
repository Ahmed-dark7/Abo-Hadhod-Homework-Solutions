#include <iostream>
using namespace std;

void enter_grades(float grades[3])
{
    cout << "please enter grade1 :\n";
    cin >> grades[0];

    cout << "please enter grade2 :\n";
    cin >> grades[1];

    cout << "please enter grade3 :\n";
    cin >> grades[2];

    cout << "**************************" << endl;
}

float Average(float grades[3])
{
    return (grades[0] + grades[1] + grades[2])/3; 
}

int main()
{
    float grades[3];
    enter_grades(grades);
    cout << "the average of grades is : " << Average(grades);
}