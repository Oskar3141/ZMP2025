#include <iostream>

using namespace std;

int main() {
	int n;

	cout << "Podaj długość ciągu: ";
	cin >> n;
	int liczby[n];

	cout << "Podaj " << n << " licz: " << endl;
	for (int i = 0; i < n; ++i) {
		cin >> liczby[i];
	}

	int min;
	for (int i = 0; i < n; ++i) {
		if (i == 0) {
			min = liczby[i];
		} else {
			if (min > abs(liczby[i]) && liczby[i] != 0) {
				min = abs(liczby[i]);
			}
		}
	}

	int szukana = 1;
	if (min != 1) {
		for (int i = 2; i <= min; ++i) {
			int ok = 1;
			for (int j = 0; j < n; ++j) {
				if (liczby[j] % i != 0) {
					ok = 0;
				}
			}

			if (ok) {
				szukana = i;
			}
		}
	}

	cout << "NWD podanych liczb wynosi: " << szukana << endl;
}