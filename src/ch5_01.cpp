#include<iostream>
#include<cmath>

#ifdef CH5_01
int main() {
	int num;
	int ndigit = 10;
	int sum = 0;

	std::cout << "Enter an integer: ";
	std::cin >> num;
	num = std::abs(num);

	while(num / static_cast<int>(std::pow(10, ndigit-1)) == 0 && ndigit > 1) {
		ndigit--;
	}

	while(ndigit > 0) {
		int digit = (num % static_cast<int>(std::pow(10, ndigit))) / std::pow(10, ndigit-1);
		sum += digit;
		std::cout << digit << " ";

		ndigit--;
	}

	std::cout << sum << std::endl;

	return 0;
}
#endif
