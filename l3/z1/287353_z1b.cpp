#include <iostream>

using namespace std;

int F_rekurencja(int n, int ak1 = 1, int ak2 = 0) {
	if (n < 2) {
		return ak1 + ak2;
	}

	return F_rekurencja(n - 1, ak1 + ak2, ak1);
}

int main() {
	int n;

	cout << "Podaj liczbę naturalną: ";
	cin >> n;

	printf("F(%d) = %d\n", n, F_rekurencja(n));
}