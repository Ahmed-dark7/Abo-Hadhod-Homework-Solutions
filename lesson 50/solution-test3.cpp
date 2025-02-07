#include <iostream>
using namespace std;

int ReadIntegerNumber(int from, int to)
{
	int number;
	cout << "enter numbet between" << from << "and" << to << endl;
	cin >> number;
	while (number < from || number > to)
	{
		cout << "wrong number \n";
		cout << "enter numbet between" << from << "and" << to << endl;
		cin >> number;
	}
	return number;
}

int main()
{
	cout << "\n the number is :" << ReadIntegerNumber(10, 20) << endl;
	return 0;
}