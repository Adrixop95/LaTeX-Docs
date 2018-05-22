#include <iostream>

using namespace std;

int tablica[100];

void podzial(int C, int obecny, int* tablica, int index) {
    if (obecny + tablica[index] == C) {
        for (int i=0; i <= index; i++) {
            cout << tablica[i] << " ";
        }
        cout << endl;       
        ;
    } else if (obecny + tablica[index] > C) {
        ;
    } else {
        for(int i = tablica[index]+1; i < C; i++) {
            tablica[index+1] = i;
            podzial(C, obecny + tablica[index], tablica, index+1);
        }
    }
}

int main(){   
    int C = 0;

	cout << "Podaj liczbe: " << endl;
	cin >> C;
	cin.get();
	cout << "======" << endl;

    for(int i = 1; i <= C; i++) {
        tablica[0] = i;
        podzial(C, 0, tablica, 0);
    }

    cin.get();
    return 0;
}