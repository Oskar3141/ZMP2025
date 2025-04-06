#include <iostream>

using namespace std;

void wypisz_podzbiory(int n, int* zbiór, int k) {	
	int podzbiór[n] = {};
	int przecinek = 0;
	int podzbiory;

	for (int i = 0; i < (1 << n); ++i) {
		// Sprawdzanie liczby podzbiorów.
		podzbiory = 0;
		for (int j = 0; j < n; ++j) {
			if ((i >> j) & 1) {
				++podzbiory;
			}
		}

		if (podzbiory > k) {  
			continue;
		}

		// Tworzenie podzbioru.
		for (int j = 0; j < n; ++j) {
			if ((i >> j) & 1) {
				podzbiór[j] = 1;
			} else {
				podzbiór[j] = 0;
			}
		}

		// Wypisanie podzbioru.
		przecinek = 0;
		cout << "{";
		for (int j = 0; j < n; ++j) {
			if (podzbiór[j]) {
				if (przecinek) {
					cout << ",";
				}
				cout << " " << zbiór[j];
				przecinek = 1;				
			}
		}
		cout << " }" << endl;
	}
}

int main() {
	int n;
	int k;

	cout << "Podaj liczbę elementów zbioru: ";
	cin >> n;

	int zbiór[n] = {};

	cout << "Podaj elementy zbioru:" << endl;
	for (int i = 0; i < n; ++i) {
		cin >> zbiór[i];
	}

	cout << "Podaj maskymalną wielkość podzbioru: ";
	cin >> k;

	cout << "Podzbiory:\n";
	wypisz_podzbiory(n, zbiór, k);

	return 0;
}