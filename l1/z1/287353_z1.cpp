/*
	Nikt nie wie czy każda każda trajektoria uderza w końcu w 1.
	Jest to tzw. problem Collatza.
*/

#include <iostream>

int f(int n) {
	if (n % 2 == 0) {
		return n / 2;
	} else {
		return 3 * n + 1;
	}
}

int main() {
	int n;

	std::cout << "Podaj liczbę: ";
	std::cin >> n;

	for (int i = 1;; ++i) {
		std::cout << n;
		n = f(n);

		if (n == 1) {
			++i;
			std::cout << " " << n << ", " << i << std::endl;
			break;
		}
		std::cout << " ";
	}

	return 0;
}
