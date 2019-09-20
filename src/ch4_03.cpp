#include<iostream>

#ifdef CH4_03
int main() {
	std::cout << "Enter a number between 0 and 35:" << std::endl;
	int num;
	std::cin >> num;
	std::cout << (num < 10 ? num : static_cast<char>(num + 55));

	return 0;
}
#endif
