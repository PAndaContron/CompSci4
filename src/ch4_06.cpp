#include<iostream>

#define sort(a, b, c) {if(a > b) std::swap(a, b); if(b > c) std::swap(b, c);}

#ifdef CH4_06
int main() {
	int a, b, c;
	std::cout << "Enter the 3 side lengths of a triangle: ";
	std::cin >> a >> b >> c;
	sort(a, b, c);
	std::cout << (a*a + b*b == c*c ? "This is a right triangle" : "This is not a right triangle") << std::endl;

	return 0;
}
#endif
