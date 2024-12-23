#include <iostream>
using namespace std;


int angka[] = { 10, 20, 30, 40, 50, 60,7,1 };

void main() {

    int TotalUkuranAngka = sizeof(angka); 
    int ukuran = sizeof(angka[0]);
    int panjangArray = TotalUkuranAngka / ukuran;

    cout << "Total ukuran array dalam byte: " << TotalUkuranAngka << endl;
    cout << "Ukuran array dalam byte: " << ukuran << endl;
    cout << "Panjang array: " << panjangArray << endl;

}
