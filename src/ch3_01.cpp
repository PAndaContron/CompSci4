#include<iostream>
#include<string>
#include<fstream>
#include<iomanip>

#define PI 3.1416
#define round(n) std::fixed << std::setprecision(2) << n

#ifdef CH3_01
int main() {
	std::ifstream infile;
	std::ofstream outfile;

	infile.open("files/ch3_01/inData.txt");
	outfile.open("files/ch3_01/outData.txt");

	double length, width, radius;
	std::string first, last;
	int age;
	double balance, interest;
	char c;

	infile >> length >> width >> radius >> first >> last >> age >> balance >> interest >> c;

	outfile << "Rectangle:" << std::endl;
	outfile << "Length = " << round(length) << ", width = " << round(width) << ", area = " << round(length*width)
			<< ", perimeter = " << round((length+width)*2) << std::endl << std::endl;

	outfile << "Circle:" << std::endl;
	outfile << "Radius = " << round(radius) << ", area = " << round(PI*radius*radius)
			<< ", circumference = " << round(PI*radius*2) << std::endl << std::endl;

	outfile << "Name: " << first << " " << last << ", age: " << age << std::endl;
	outfile << "Beginning balance = $" << round(balance) << ", interest rate = " << round(interest) << std::endl;
	outfile << "Balance at the end of the month = $" << round(balance + balance*(interest/1200)) << std::endl << std::endl;

	outfile << "The character that comes after " << c << " in the ASCII set is " << static_cast<char>(c+1);

	infile.close();
	outfile.close();

	return 0;
}
#endif
