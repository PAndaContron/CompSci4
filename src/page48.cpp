#include<iostream>

#define println(s) std::cout << s << std::endl
#define sci static_cast<int>
#define scd static_cast<double>

#ifdef PAGE48
int main() {
	println("static_cast<int>(7.9) = " << sci(7.9));
	println("static_cast<int>(3.3) = " << sci(3.3));
	println("static_cast<double>(25) = " << scd(25));
	println("static_cast<double>(5 + 3) = " << scd(5+3));
	println("static_cast<double>(15) / 2 = " << scd(15)/2);
	println("static_cast<double>(15 / 2) = " << scd(15/2));
	println("static_cast<int>(7.8 + static_cast<double>(15) / 2) = " << sci(7.8 + scd(15)/2));
	println("static_cast<int>(7.8 + static_cast<double>(15 / 2)) = " << sci(7.8 + scd(15/2)));

	return 0;
}
#endif
