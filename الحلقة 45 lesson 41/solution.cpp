#include <iostream>
using namespace std;

struct person
{
    string first_name, last_name, phone;
    short age;
};

void read_person(person &information)
{
    cout << "please enter your first name :\n";
    cin >> information.first_name;
    cout << "please enter your last name :\n";
    cin >> information.last_name;
    cout << "please enter your age :\n";
    cin >> information.age;
    cout << "please enter your phone number :\n";
    cin >> information.phone;
}

void ReadPerson(person information[2])
{
    read_person(information[0]);
    read_person(information[1]);
}

void print_person(person information)
{
    cout << "*************************\n";
    cout << "first name : " << information.first_name << endl;
    cout << "last name : " << information.last_name << endl;
    cout << "Age : " << information.age << " Years.\n";
    cout << "phone : " << information.phone << ".\n";
    cout << "*************************" << endl;
}

void PrintPerson(person information[2])
{
    print_person(information[0]);
    print_person(information[1]);
}

int main()
{
    person information[2];
    ReadPerson(information);
    PrintPerson(information);
    return 0;
}