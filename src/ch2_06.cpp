#include<iostream>
#include<string>

#define cout   std::cout
#define cin	   std::cin
#define endl   std::endl
#define string std::string

#ifdef CH2_06
int main() {
	string name;
	double studyHours;

	cout << "Enter your name: ";
	cin >> name;
	cout << "Enter how many hours you need to study: ";
	cin >> studyHours;
	cout << "Hello, " << name << "! on Saturday, you need to study " << studyHours << " hours for the exam." << endl;

	return 0;
}
#endif
