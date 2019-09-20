#include<iostream>
#include<utility>

#define sort(a, b, c) {if(a > b) std::swap(a, b); if(b > c) std::swap(b, c); if(a > b) std::swap(a, b);}

#ifdef CH4_02
int main() {
	int a, b, c;
	std::cout << "Enter 3 integers:" << std::endl;
	std::cin >> a >> b >> c;
	sort(a, b, c);
	std::cout << a << " " << b << " " << c;
	return 0;
}
#endif
