#include<iostream>
#include<string>

#define print(a, b, c) std::cout << a << b << c << std::endl;

#ifdef CH2_21
int main() {
	std::string s1, s2, s3;
	std::cout << "Enter 3 strings:" << std::endl;
	std::cin >> s1 >> s2 >> s3;

	print(s1, s2, s3);
	print(s1, s3, s2);
	print(s2, s1, s3);
	print(s2, s3, s1);
	print(s3, s1, s2);
	print(s3, s2, s1);

	return 0;
}
#endif
