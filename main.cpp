#include <iostream>
#include <sstream>
#include <string>

using namespace std;

float phrasef(string l) {
	stringstream ss(l);
	float a, b;
	char op;
	ss >> a >> op >> b;
	switch (op) {
		case '+':
			return a + b;
		case '-':
			return a - b;
		case '*':
			return a * b;
		case '/':
			return a / b;
		default:
			return 0;
	}
}


int phrase(string l) {
	stringstream ss(l);
	int a, b;
	char op;
	ss >> a >> op >> b;
	switch (op) {
		case '+':
			return a + b;
		case '-':
			return a - b;
		case '*':
			return a * b;
		case '/':
			return a / b;
		default:
			return 0;
	}
}

int main() {
	std::string line;
	while (std::getline(std::cin, line)) {
		if (line == ".q" || line == "exit") {
			break;
		}

		if (line.contains('.')) {
			std::cout << phrasef(line) << std::endl;
		} else {
			std::cout << phrase(line) << std::endl;
		}
	}

	return 0;
}
