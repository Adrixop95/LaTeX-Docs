#include <iostream>

using namespace std;

bool znajdz_duplikat(int lista[], int rozmiar_tablicy) {
	sort(lista);
	for (int i = 0; i < rozmiar_tablicy - 1; i++) {
		if (lista[i] == lista[i + 1]){
			return true;
		}
	}
	return false;
}	

void sprawdz_i_wypisz(int pozycja, int pozostalo) {
	if (pozostalo == 0 && znajdzDuplikat(lista, pozycja) == false) {
		for (int i = 1; i <= pozycja - 1; i++) {
			cout << lista[i] << " ";
		}
		cout << endl;
	} else {
		for (int k = lista[pozycja - 1]; k <= pozostalo; k++) {
			lista[pozycja] = k;
			sprawdz_i_wypisz(pozycja + 1, pozostalo - k);
		}
	}
}	

void wywolanie(int C) {
	lista[0] = 1;
	sprawdz_i_wypisz(1, C);
}