#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>

#define round(n) std::setw(7) << std::fixed << std::setprecision(2) << n

#ifdef CH3_06
int main() {
	std::string first, last;
	double gross, net;
	double fed, state, ss, med, pen, health;

	fed = 0.15;
	state = 0.035;
	ss = 0.0575;
	med = 0.0275;
	pen = 0.05;
	health = 75;

	std::cout << "Enter a first and last name: ";
	std::cin >> first >> last;
	std::cout << "Enter the gross pay: ";
	std::cin >> gross;

	fed *= gross;
	state *= gross;
	ss *= gross;
	med *= gross;
	pen *= gross;
	net = gross -fed -state -ss -med -pen -health;

	std::ofstream outfile;
	outfile.open("files/ch3_06/output.txt");

	outfile << first << " " << last << std::endl;
	outfile << "Gross Amount: ............ $" << round(gross) << std::endl;
	outfile << "Federal Tax: ............. $" << round(fed) << std::endl;
	outfile << "State Tax: ............... $" << round(state) << std::endl;
	outfile << "Social Security Tax: ..... $" << round(ss) << std::endl;
	outfile << "Medicare/Medicaid Tax: ... $" << round(med) << std::endl;
	outfile << "Pension Plan: ............ $" << round(pen) << std::endl;
	outfile << "Health Insurance: ........ $" << round(health) << std::endl;
	outfile << "Net Pay: ................. $" << round(net) << std::endl;

	outfile.close();

	return 0;
}
#endif
