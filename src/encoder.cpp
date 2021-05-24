#include <iostream>

int getAlphabetPosition(char in) {
	if (in >= 65 && in <= 98)
		return in - 64;

	return 0;
}

int encode() {
    std::string str;
	std::cin >> str;

	for (int i = 0; i < str.length(); i++) {
		int pos = getAlphabetPosition(str[i]);
		for (int i = 0; i < pos; i++) {
			std::cout << ")";
		}
		std::cout << "(";
	}

	return 0;
}