#include<iostream>

#define cout std::cout
#define cin	 std::cin
#define endl std::endl

#ifdef CH2_03
int main() {
	int num1, num2, num3, average;
	num1 = 125;
	num2 = 28;
	num3 = -25;
	average = (num1 + num2 + num3)/3;

	cout << num1	<< endl;
	cout << num2	<< endl;
	cout << num3	<< endl;
	cout << average	<< endl;

	return 0;
}
#endif
