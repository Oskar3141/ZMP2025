#include <iostream>

using namespace std;

int main() {
	int x, n;
	int numer_szukanej = -1;

	cout << "Podaj poszukowaną liczbę: ";
	cin >> x;
	cout << "Podaj długość ciągu: ";
	cin >> n;
	int liczby[n];

	cout << "Podaj " << n << " licz: " << endl;
	for (int i = 0; i < n; ++i) {
		int k;
		cin >> k;
		liczby[i] = k;
	}

	for (int i = 0; i < n; ++i) {
		if (k == x) {
			numer_szukanej = i;
			break;
		}
	}

	if (numer_szukanej != -1) {
		cout << "Tak; " << numer_szukanej << endl;
	} else {
		cout << "Nie" << endl;
	}
}