#include<iostream>

#define print(s) std::cout << s
#define println(s) print(s << std::endl)
#define read(n) std::cin >> n

#ifdef CH2_07
int main() {
	print("Enter a decimal number: ");
	double num;
	read(num);
	println("Casted to int: " << static_cast<int>(num));

	return 0;
}
#endif
