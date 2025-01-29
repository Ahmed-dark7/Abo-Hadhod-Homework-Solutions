#include <iostream>
#include <string>
using namespace std;
int main()
{
    string string1 , string2 , string3;
    int st2 , st3 , mult;

    cout << "please enter string1\n";
    getline ( cin , string1);
    cout << endl;
    cout << "please enter string2\n";
    cin >> string2;
    cout << endl;
    cout << "please enter string3\n";
    cin >> string3;
    cout << endl;

    st2 = stoi (string2);
    st3 = stoi (string3);
    mult = st2 * st3;

    cout << "****************************\n";
    cout << "the length os string1 is :" << string1.length() << endl;
    cout << "characters at 0,2,4,7 are :" << string1[0] << " " << string1[2] << " " << string1[4] << " " << string1[7] << endl;
    cout << "concatenatinf string2 and string3 = " << string2 + string3 << endl;
    cout << string2 << " * " << string3 << " = " << mult;

    return 0;
}