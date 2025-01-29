#include <iostream>
using namespace std;
int main ()
{
    string  name , city , country;
    short   age;
    float   monthlysalary;
    char    gender;
    bool    is_married;

    cout << "please enter your name :\n";
    cin  >> name;
    cout <<endl;
    cout << "please enter your age :\n";
    cin  >> age;
    cout <<endl;
    cout << "please enter the city :\n";
    cin  >> city;
    cout <<endl;
    cout << "please enter the country :\n";
    cin  >> country;
    cout <<endl;
    cout << "please enter the monthly salary :\n";
    cin  >> monthlysalary;
    cout <<endl;
    cout << "please enter your gender m/f ?\n";
    cin  >> gender;
    cout <<endl;
    cout << "please if you is married 1/o ? :";
    cin  >> is_married;
    cout <<endl;
    

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
    cout << "*******************************\n";
    return 0;
}