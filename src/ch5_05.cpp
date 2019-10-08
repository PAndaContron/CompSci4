#include<iostream>
#include<string>
#include<algorithm>

#ifdef CH5_05
int main() {
	while(true) {
		std::string line;
		std::cout << "Enter a sequence of letters: " << std::endl;
		std::getline(std::cin, line);
		line.erase(std::remove_if(line.begin(), line.end(), isspace), line.end());

		if(line.length() < 7) {
			std::cerr << "Message must be at least 7 letters";
			continue;
		}

		for(int i=0; i<7; i++) {
			if(i == 3) {
				std::cout << "-";
			}

			int digit = 0;
			switch(line.at(i)) {
				case '_': case ',': case '@':
					digit = 1; break;
				case 'a': case 'A': case 'b': case 'B': case 'c': case 'C':
					digit = 2; break;
				case 'd': case 'D': case 'e': case 'E': case 'f': case 'F':
					digit = 3; break;
				case 'g': case 'G': case 'h': case 'H': case 'i': case 'I':
					digit = 4; break;
				case 'j': case 'J': case 'k': case 'K': case 'l': case 'L':
					digit = 5; break;
				case 'm': case 'M': case 'n': case 'N': case 'o': case 'O':
					digit = 6; break;
				case 'p': case 'P': case 'q': case 'Q': case 'r': case 'R': case 's': case 'S':
					digit = 7; break;
				case 't': case 'T': case 'u': case 'U': case 'v': case 'V':
					digit = 8; break;
				case 'w': case 'W': case 'x': case 'X': case 'y': case 'Y': case 'z': case 'Z':
					digit = 9; break;
			}
			std::cout << digit;
		}
		std::cout << std::endl;

		char another;
		std::cout << "Enter another message? (y/n) ";
		std::getline(std::cin, line);
		another = line.at(0);
		if(another == 'n' || another == 'N') {
			break;
		}
	}

	return 0;
}
#endif
