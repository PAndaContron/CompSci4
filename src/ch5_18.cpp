#include<iostream>

#ifdef CH5_18
int main() {
	unsigned int num;
	std::cout << "Enter a number of students/lockers: ";
	std::cin >> num;

	int open = 0;
	for(int l=0; l<num; l++) {
		bool lopen = true;
		for(int i=2; i<num; i++) {
			if(l % i == 0) {
				lopen = !lopen;
			}
		}

		if(lopen) {
			open++;
		}
	}

	std::cout << open << " lockers are open." << std::endl;

	return 0;
}
#endif
