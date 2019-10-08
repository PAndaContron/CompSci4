#include<iostream>

#ifdef CH4_07
int main() {
	int total, perBox, perContainer;
	std::cout << "Enter the total number of cookies: ";
	std::cin >> total;
	std::cout << "Enter the number of cookies per box: ";
	std::cin >> perBox;
	std::cout << "Enter the number of boxes per container: ";
	std::cin >> perContainer;

	int numBoxes, leftoverCookies, numContainers, leftoverBoxes;
	numBoxes = total/perBox;
	leftoverCookies = total - numBoxes*perBox;
	numContainers = numBoxes/perContainer;
	leftoverBoxes = numBoxes - numContainers*perContainer;

	std::cout << "Boxes required: " << numBoxes << std::endl;
	std::cout << "Leftover cookies: " << leftoverCookies << std::endl;
	std::cout << "Containers required: " << numContainers << std::endl;
	std::cout << "Leftover boxes: " << leftoverBoxes << std::endl;

	return 0;
}
#endif
