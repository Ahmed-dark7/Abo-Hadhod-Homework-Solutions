#include <iostream>
using namespace std;

enum gender { man , woman };
enum married { is_married , not_married };

int main()
{
    string name = "Ahmed Ibrahem.";
    short age = 20;
    string city = "damitta.";
    string country = "Egypt.";
    float monthlysalary = 5000;
    gender sex;
    married status;

    sex = gender::man;
    status = married::not_married;

    cout << "*******************************\n";
    cout << "Name: " << name << endl;
    cout << "Age : " << age << " Years.\n";
    cout << "City: " << city << endl;
    cout << "Country: " << country << endl;
    cout << "Monthly salary : " << monthlysalary << endl;
    cout << "Yearly salary: " << monthlysalary * 12 << endl;
    // I can make a variable of the number of months in the year and multiply it with monthly salary.
    cout << "Gender: " << sex <<endl;
    cout << "Married : " << status <<endl;
    cout << "*******************************";
    return 0;
}