#include <iostream>
using namespace std;

    struct address
    {
        string street;
        short NumOfHouse;
    };

    struct person
    {
        string name;
        short age;
        string city;
        string country;
        float monthly_salary;
        char gender;
        bool married = true;
        address location; 
    };

int main()
{
    person character;

    cout << "please enter your name :\n";
    cin >> character.name;
    cout << "please enter your age :\n";
    cin >> character.age;
    cout << "please enter your city :\n";
    cin >> character.city;
    cout << "please enter your country :\n";
    cin >> character.country;
    cout << "please enter your street :" << endl;
    cin >> character.location.street;
    cout << "please enter your number of house :\n";
    cin >> character.location.NumOfHouse;
    cout << "please enter your monthly salary :\n";
    cin >> character.monthly_salary;
    cout << "please enter your gender ( if you man enter m or if you girl enter f ) :\n";
    cin >> character.gender;
    cout << "please if you married enter 1 else enter 0 :" << endl;
    cin >> character.married;

    cout << "*******************************\n";
    cout << "Name: " << character.name << endl;
    cout << "Age : " << character.age << " Years.\n";
    cout << "City: " << character.city << endl;
    cout << "Country: " << character.country << endl;
    cout << "street : " << character.location.street << endl;
    cout << "number of house : " << character.location.NumOfHouse << endl;
    cout << "Monthly salary : " << character.monthly_salary << endl;
    cout << "Yearly salary: " << character.monthly_salary * 12 << endl;
    // I can make a variable of the number of months in the year and multiply it with monthly salary.
    cout << "Gender: " << character.gender <<endl;
    cout << "Married : " <<character.married <<endl;
    cout << "*******************************";

return 0;
}