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

void print_person(person information)
{
    cout << "*************************\n";
    cout << "first name : " << information.first_name << endl;
    cout << "last name : " << information.last_name << endl;
    cout << "Age : " << information.age << " Years.\n";
    cout << "phone : " << information.phone << ".\n";
    cout << "*************************" << endl;
}
void ReadPerson(person information[100] ,int &length)
{
    cout << "Enter the number of people you want to enter : ";
    cin >> length;

    for (int i = 0; i <= length - 1; i++)
    {
        cout << "please enter person's " << i + 1 << " info : \n";
        read_person(information[i]);
    }
}

void PrintPerson(person information[100] , int length)
{
    for (int i = 0; i <= length - 1; i++)
    {
        print_person(information[i]);
    }
}

int main()
{
    int length = 0;
    person information[100];
    ReadPerson(information , length);
    PrintPerson(information , length);
    return 0;
}