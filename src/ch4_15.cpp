#include<iostream>
#include<iomanip>

#define round(n) std::fixed << std::setprecision(2) << n

#ifdef CH4_15
int main() {
	int acctNum;
	char serviceCode;

	std::cout << "Enter your account number: ";
	std::cin >> acctNum;
	std::cout << "Enter your service code ([R]egular/[P]remium): ";
	std::cin >> serviceCode;

	if(serviceCode == 'r' || serviceCode == 'R') {
		int minutes;
		std::cout << "How many minutes did you use the service for? ";
		std::cin >> minutes;

		std::cout << "Account number: " << acctNum << std::endl;
		std::cout << "Type of service: Regular" << std::endl;
		std::cout << "Minutes used: " << minutes << std::endl;
		std::cout << "Amount due: $" << round(10.0 + 0.2*std::max(0, minutes-50)) << std::endl;
	} else if(serviceCode == 'p' || serviceCode == 'P') {
		int day, night;
		std::cout << "How many minutes did you use the service for during the day? ";
		std::cin >> day;
		std::cout << "How many minutes did you use the service for during the night? ";
		std::cin >> night;

		std::cout << "Account number: " << acctNum << std::endl;
		std::cout << "Type of service: Premium" << std::endl;
		std::cout << "Minutes used: " << (day+night) << std::endl;
		std::cout << "Amount due: $" << round(25.0 + 0.1*std::max(0, day-75) + 0.05*std::max(0, night-100)) << std::endl;
	} else {
		std::cerr << "Invalid service code" << std::endl;
		return 1;
	}

	return 0;
}
#endif
