#include<iostream>

#ifdef CH4_01
int main() {
	int num;
	std::cout << "Enter a number: ";
	std::cin >> num;

	if(num > 0) {
		std::cout << "Positive" << std::endl;
	} else if (num < 0) {
		std::cout << "Negative" << std::endl;
	} else {
		std::cout << "Zero" << std::endl;
	}

	return 0;
}
#endif
