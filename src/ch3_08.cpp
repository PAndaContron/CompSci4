#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>

#define round(n) std::fixed << std::setprecision(2) << n
#define read(f, l, s, r, in) in >> l >> f >> s >> r
#define write(f, l, s, out) out << f << " " << l << " " << s << std::endl;
#define copy(f, l, s, r, in, out) {read(f, l, s, r, in); write(f, l, round(s+s*r/100), out);}

#ifdef CH3_08
int main() {
	std::string first, last;
	double salary, raise;

	std::ifstream input;
	std::ofstream output;

	input.open("files/ch3_08/Ch3_Ex8Data.txt");
	output.open("files/ch3_08/Ch3_Ex8Output.dat");

	copy(first, last, salary, raise, input, output);
	copy(first, last, salary, raise, input, output);
	copy(first, last, salary, raise, input, output);

	input.close();
	output.close();

	return 0;
}
#endif
