#include<iostream>
#include<string>

#define cout   std::cout
#define cin	   std::cin
#define endl   std::endl
#define string std::string

#ifdef CH2_08
int main() {
	const int SECRET = 11;
	const double RATE = 12.50;

	int num1, num2, newNum;
	string name;
	double hoursWorked, wages;

	cout << "Enter 2 integers: ";
	cin >> num1 >> num2;
	cout << "The value of num1 = " << num1 << " and the value of num2 = " << num2 << "." << endl;
	newNum = num1*2 + num2;
	cout << "The value of newNum = " << newNum << "." << endl;
	newNum += SECRET;
	cout << "The new value of newNum = " << newNum << "." << endl;

	cout << "Enter a person's last name: ";
	cin >> name;
	cout << "Enter the number of hours worked (0-70): ";
	cin >> hoursWorked;
	wages = RATE*hoursWorked;

	cout << "Name: " << name << endl;
	cout << "Pay Rate: $" << RATE << endl;
	cout << "Hours Worked: " << hoursWorked << endl << endl;
	cout << "Salary: $" << wages << endl;

	return 0;
}
#endif
