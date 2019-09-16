#include<iostream>

#define cout std::cout
#define cin	 std::cin
#define endl std::endl

#ifdef CH2_04
int main() {
	double num1, num2, num3, average;
	num1 = 75.35;
	num2 = -35.56;
	num3 = 15.76;
	average = (num1 + num2 + num3)/3.0;

	cout << num1	<< endl;
	cout << num2	<< endl;
	cout << num3	<< endl;
	cout << average	<< endl;

	return 0;
}
#endif
