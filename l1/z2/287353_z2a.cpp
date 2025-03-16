#include <iostream>

bool wzglednie_pierwsze(int a, int b) {
	int k = std::min(a, b);

	for (int i = 2; i <= k; ++i) {
		if ((a % i == 0) && (b % i == 0)) {
			return false;
		}
	}

	return true;
}

int fi(int n) {
	int k = 0;

	for (int i = 1; i <= n; ++i) {
		if (wzglednie_pierwsze(i, n) == 1) {
			++k;
		}
	}

	return k;
}

int main() {
	int n;

	std::cout << "Podaj liczbę: ";
	std::cin >> n;
	printf("fi(%d) = %d\n", n, fi(n));

	return 0;
}
