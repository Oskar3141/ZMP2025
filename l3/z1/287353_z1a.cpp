#include <iostream>

using namespace std;

int F_pętla(int n) {
	int wyraz = 1;
	int poprzedni = 1;

	if (n < 2) {
		return wyraz;
	}

	for (int i = 2; i <= n; ++i) {
		wyraz = wyraz + poprzedni;
		poprzedni = wyraz - poprzedni;
	}

	return wyraz;
}

int main() {
	int n;

	cout << "Podaj liczbę naturalną: ";
	cin >> n;

	printf("F(%d) = %d\n", n, F_pętla(n));
}