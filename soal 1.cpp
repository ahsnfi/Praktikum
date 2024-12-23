#include<iostream>
using namespace std;

void main() {
    int matriks1[3][3],
        matriks2[3][3],
        hasil[3][3];

    cout << "Masukkan angka untuk matriks 1 (3x3):\n";
    for (int baris = 0; baris < 3; baris++) {
        for (int kolom = 0; kolom < 3; kolom++) {
            cout << "Baris " << baris + 1 << " Kolom " << kolom + 1 << " : ";
            cin >> matriks1[baris][kolom];
        }
    }

    cout << "\nMasukkan angka untuk matriks 2 (3x3):\n";
    for (int baris2 = 0; baris2 < 3; baris2++) {
        for (int kolom2 = 0; kolom2 < 3; kolom2++) {
            cout << "Baris" <<  baris2+ 1 << " Kolom " << kolom2 + 1 << " : ";
            cin >> matriks2[baris2][kolom2];
        }
    }


    for (int baris = 0; baris <  3; baris++) {
        for (int kolom = 0; kolom < 3; kolom++) {
            hasil[baris][kolom] = matriks1[baris][kolom] + matriks2[baris][kolom];
        }
    }

    
    cout << "\nHasil penjumlahan matrik 1 dan 2 adalah:\n";
    for (int baris = 0; baris < 3; baris++) {
        for (int  kolom= 0; kolom < 3; kolom++) {
            cout << hasil[baris][kolom] << " ";
        }
        cout << endl;
    }

   
}
