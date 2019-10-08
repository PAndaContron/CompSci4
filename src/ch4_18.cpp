#include<iostream>

#ifdef CH4_18
int main() {
	double price1, price2, price3;
	double sqft1, sqft2, sqft3;
	double psqft1, psqft2, psqft3;

	std::cout << "Enter the base price and finished area of the first model: ";
	std::cin >> price1 >> sqft1;
	std::cout << "Enter the base price and finished area of the second model: ";
	std::cin >> price2 >> sqft2;
	std::cout << "Enter the base price and finished area of the third model: ";
	std::cin >> price3 >> sqft3;

	psqft1 = price1/sqft1;
	psqft2 = price2/sqft2;
	psqft3 = price3/sqft3;

	std::cout << "Model " << (psqft1 < psqft2 && psqft1 < psqft3 ? 1 : psqft2 < psqft3 ? 2 : 3) << " is the best.";
	std::cout << std::endl;

	return 0;
}
#endif
