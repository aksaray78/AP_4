#include <iostream>
using namespace std;

//Aksa Prawira Sukma 251401080

int main() {
system("cls");

    int i, n;

    cout << "Masukkan banyak elemen array Anda: "; 
    cin >> n;

    int array_awal[n+1];

    cout << "Input array: \n" ;
    for (i = 1; i < n+1; i++ ) {
        cout << i << ". ";
        cin >> array_awal[i];
    }

    system("cls");

    cout << "PROGRAM PEMBALIKAN ARRAY\n";
    cout << "Array awal Anda: ";
    for (i = 1; i < n+1; i++) {
        cout << array_awal[i] << " ";
    }

    cout << endl;

    int array_balik[n+1];

    for (i = 1; i < n+1; i++) {
        array_balik[i] = array_awal[n + 1 - i];
    }

    cout << "Array akhir Anda: ";
    for (i = 1; i < n+1; i++) {
        cout << array_balik[i] << " ";
    }
return 0;
}

