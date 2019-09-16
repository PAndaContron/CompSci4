#include<iostream>
#include<iomanip>

#define round(n) std::fixed << std::setprecision(2) << n

#ifdef CH3_03
int main() {
	double kg, lb;
	std::cout << "Enter weight in kg: ";
	std::cin >> kg;
	lb = kg * 2.2;
	std::cout << round(kg) << " kg" << std::endl;
	std::cout << round(lb) << " lbs" << std::endl;

	return 0;
}
#endif
