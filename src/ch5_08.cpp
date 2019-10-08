#include<iostream>
#include<cmath>

#ifdef CH5_08
bool divisible11(unsigned int num) {
	if(num == 0) {
		return true;
	}
	if(num < 11) {
		return false;
	}

	int sum = 0;
	int dig = 0;
	while(num > 0) {
		int curr = num % 10;
		num /= 10;
		sum += curr*std::pow(-1, dig);
		dig++;
	}

	return divisible11(std::abs(sum));
}

int main() {
	unsigned int num;
	std::cout << "Enter a positive integer: ";
	std::cin >> num;
	std::cout << "The number is " << (divisible11(num) ? "" : "not ") << "divisible by 11." << std::endl;

	return 0;
}
#endif
