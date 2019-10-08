#include<iostream>

#ifdef CH5_15
int main() {
	unsigned int x, a;
	int k = 0;

	unsigned int max = 0;
	int kmax = 0;

	std::cout << "Enter a positive integer: ";
	std::cin >> x;
	a = x;

	while(a != 1) {
		if(a > max) {
			kmax = k;
			max = a;
		}

		if(a % 2 == 0) {
			a /= 2;
		} else {
			a = 3*a + 1;
		}

		k++;
	}

	std::cout << "k = " << k << std::endl;
	std::cout << "Largest number was " << max << " at position " << kmax+1 << std::endl;

	return 0;
}
#endif
