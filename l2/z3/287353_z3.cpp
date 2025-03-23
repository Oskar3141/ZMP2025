#include <iostream>

using namespace std;

int main() {
	int sekret = 0;
	int klucz = 0;
	int wyjscie = 0;

	cout << "Podaj osiem bitów do zaszyfrowania: " << endl;
	for (int i = 7; i >= 0; --i) {
		int k;
		cin >> k;
		if (k) sekret += (1 << i);
	}

	cout << "Podaj klucz szyfrujący: " << endl;
	for (int i = 7; i >= 0; --i) {
		int k;
		cin >> k;
		if (k) klucz += (1 << i);
	}

	wyjscie = sekret ^ klucz;

	cout << sekret << endl;
	cout << klucz << endl;
	cout << wyjscie << endl;

	cout << "zaszyfrowany bajt: ";
	for (int i = 0; i < 8; ++i) {
		int k = 1 << (7 - i);
		if (wyjscie >= k) {
			wyjscie -= k;
			cout << "1 ";
		} else {
			cout << "0 ";
		}
	}

	return 0;
}