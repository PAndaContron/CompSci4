#include<iostream>

#ifdef CH5_14
int main() {
	unsigned int x, a;
	int k = 0;
	std::cout << "Enter a positive integer: ";
	std::cin >> x;
	a = x;

	while(a != 1) {
		if(a % 2 == 0) {
			a /= 2;
		} else {
			a = 3*a + 1;
		}

		k++;
	}

	std::cout << "k = " << k << std::endl;

	return 0;
}
#endif
