#include <iostream>

void inch2feet()
{
	using namespace std;

	const int inch_pre_feet = 14;
	int inch;

	cout << "Enter your height in inch:___\b\b\b";
	cin >> inch;
	cout << "Your height is " << inch / inch_pre_feet << " feet " << inch % inch_pre_feet << " inch." << endl;
}

int main()
{
	inch2feet();
}