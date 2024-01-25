#include<iostream>
using namespace std;

int main()
{
	int day, month, year;
	cout << "input day " << endl;
	cin >> day;
	cout << "enter month" << endl;
	cin >> month;
	cout << "enter year" << endl;
	cin >> year;

	if (day > 31)
	{
		cout << "incorrect day" << endl;
	}
	if (month > 12)
	{
		cout << "invalid month" << endl;
	}
	if (year > 2024)
	{
		cout << "invalid year" << endl;
	}

	cout << "the date you entered is " << " day : " << day << " month : " << month << " year: " << year << endl;

	return 0;
}