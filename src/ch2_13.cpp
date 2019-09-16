#include<iostream>

#ifdef CH2_13
int main() {
	int time;

	std::cout << "Enter elapsed time in seconds: ";
	std::cin >> time;
	std::cout << "Elapsed time in HMS: " << (time/3600) << ":" << (time%3600/60) << ":" << (time%60) << std::endl;

	return 0;
}
#endif
