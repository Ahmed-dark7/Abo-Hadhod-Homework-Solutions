#include <iostream>
using namespace std;
int main()
{
    string name = "Ahmed Ibrahem.";
    short age = 20;
    string city = "damitta.";
    string country = "Egypt.";
    float monthlysalary = 5000;
    char gender = 'm';
    bool is_married = true;

    cout << "*******************************\n";
    cout << "Name: " << name << endl;
    cout << "Age : " << age << " Years.\n";
    cout << "City: " << city << endl;
    cout << "Country: " << country << endl;
    cout << "Monthly salary : " << monthlysalary << endl;
    cout << "Yearly salary: " << monthlysalary * 12 << endl;
    // I can make a variable of the number of months in the year and multiply it with monthly salary.
    cout << "Gender: " << gender <<endl;
    cout << "Married : " << is_married <<endl;
    cout << "*******************************";
    return 0;
}
