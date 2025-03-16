#include <iostream>
#include <cmath>

int zera(int n) {
	if (n < 5) return 0;
	int k = 0;

	while (pow(5, k+1) <= n) { ++k; }

	int zera = 0;
	for (int i = 1; i <= k; ++i) {
		zera += n / pow(5, i);
	}

	printf("k = %d\n", k);

	return zera;
}

int main() {
	int n;

	std::cout << "Podaj liczbę: ";
	std::cin >> n;

	printf("Liczba zer na końcu liczby %d! wynosi %d.\n", n, zera(n));

	return 0;
}