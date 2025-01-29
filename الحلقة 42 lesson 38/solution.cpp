#include <iostream>
#include <string>
using namespace std;

struct person
{
    string name , city , country;
    short age;
    int monthly_salary , yearly_salart;
    char gender;
    bool married = 1;
};

void read_person(person &information)
{
    cout << "please enter your name :\n";
    getline (cin , information.name);
    cout << "please enter your age :\n";
    cin >> information.age;
    cout << "please enter your city :\n";
    cin >> information.city;
    cout << "please enter your country :\n";
    cin >> information.country;
    cout << "please enter your monthly salary :\n";
    cin >> information.monthly_salary;
    cout << "please enter m if you are mail else enter f :\n";
    cin >> information.gender;
    cout << "please enter true if you are married :\n";
    cin >> information.married;
}

void print_person(person information)
{
    cout << "*******************************\n";
    cout << "Name : " << information.name << "." << endl;
    cout << "Age : " << information.age << " years." << endl;
    cout << "city : " << information.city << "."  << endl;
    cout << "country : " << information.country << "."  << endl;
    cout << "month salary : " << information.monthly_salary << endl;
    cout << "yearly salaty : " << information.monthly_salary * 12 << endl;
    cout << "gender : " << information.gender << endl;
    cout << "married : " << information.married << endl;
    cout << "*******************************";

}

int main()
{
    person infperson;
    read_person(infperson);
    print_person(infperson);
    return 0;
}