#include <iostream>
#include <algorithm>

using namespace std;

int ciag[100];

bool checkDuplicates(int array[], int n)
{
	sort(array, array + n);
	int i;
	for (i = 0; i < n - 1; i++)
	{
		if (array[i] == array[i + 1])
			return true;
	}
	return false;
}

void dalej(int poz, int pozostalo)
{
	if (pozostalo == 0) {
		if (checkDuplicates(ciag, poz) == false){
			for (int i = 1; i <= poz - 1; i++) {
				cout << ciag[i] << " ";
			}
			cout << endl;
		}
	}

	else {
		for (int k = ciag[poz - 1]; k <= pozostalo; k++) {
			ciag[poz] = k;
			dalej(poz + 1, pozostalo - k);
		}
	}
}

void podzialy(int n)
{
	ciag[0] = 1;
	dalej(1, n);
}

int main() {

	int liczba = 0;

	cout << "Podaj liczbe: " << endl;
	cin >> liczba;
	cin.get();
	cout << "======" << endl;

	podzialy(liczba);

	cin.get();
	return 0;
}
