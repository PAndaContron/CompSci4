#include<iostream>
#include<iomanip>

#define round(n) std::fixed << std::setprecision(0) << n

#ifdef CH5_27
int main() {
	double allOcc, inc, maint;

	std::cout << "Enter the rent to occupy all the units: ";
	std::cin >> allOcc;
	std::cout << "Enter the increase in rent per vacant unit: ";
	std::cin >> inc;
	std::cout << "Enter the maintenance cost per unit: ";
	std::cin >> maint;

	allOcc -= maint;
	double max = (50-(allOcc/inc))/2;
	std::cout << round(50 - max);

	return 0;
}
#endif
