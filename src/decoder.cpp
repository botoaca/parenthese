#include <iostream>

char getLetter(int toCheck) {
    return (char) toCheck + 64;
}

int decode() {
	std::string str;
	std::cin >> str;

	int parenCount = 0;
	std::string decoded;

	for (int i = 0; i < str.length(); i++) {
		if (str[i] == ')')
			parenCount++;
		if (str[i] == '(') {
			decoded += getLetter(parenCount);
			parenCount = 0;
		}

	}

	std::cout << decoded << std::endl;

	return 0;
}