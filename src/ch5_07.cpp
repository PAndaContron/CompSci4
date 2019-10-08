#include<iostream>
#include<cmath>

#ifdef CH5_07
int main() {
	unsigned int num;
	std::cout << "Enter a positive integer: ";
	std::cin >> num;
	unsigned int sqrt = static_cast<int>(std::sqrt(num));

	for(int i=2; i<=sqrt; i++) {
		if(num % i == 0) {
			std::cout << "The number is composite." << std::endl;
			return 0;
		}
	}
	std::cout << "The number is prime." << std::endl;

	return 0;
}
#endif
