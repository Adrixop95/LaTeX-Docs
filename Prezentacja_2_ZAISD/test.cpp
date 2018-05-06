#include <iostream>
#include <cmath>

using namespace std;

int ciag[100]; 

void dalej(int poz, int pozostalo)
{

    
    if(pozostalo == 0 && ciag[poz-1] != ciag[poz-2]) {
        for(int i = 1; i <= poz-1; i++) {
            cout << ciag[i] << " ";
        }
        cout << endl;
    }
    else {
        for(int k = ciag[poz-1]; k <= pozostalo; k++) {
            ciag[poz] = k;
            dalej(poz+1, pozostalo - k);
        }
    }
}

void podzialy(int n)
{
    ciag[0] = 1;    
    dalej(1, n);  
}

int main(){

    int liczba = 0;

    cin >> liczba;
    podzialy(liczba);

    cin.get();
    return 0;
}
