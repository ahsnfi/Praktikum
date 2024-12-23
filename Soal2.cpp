#include<iostream>
using namespace std;

void main() {
    int matriks1[3][3],
        matriks2[3][3],
        hasil[3][3];

    cout << "Masukkan angka untuk matriks 1 (3x3):\n";
    for (int baris = 0; baris < 3; baris++) {
        for (int kolom = 0; kolom < 3; kolom++) {
            cout << "Baris " << baris + 1  << " Kolom " << kolom + 1 << " : ";
            cin >> matriks1[baris][kolom];
        }
    }

    cout << "\nMasukkan angka untuk matriks 2 (3x3):\n";
    for (int baris2 = 0; baris2 < 3; baris2++) {
        for (int kolom2 = 0; kolom2 < 3; kolom2++) {
            cout << "Baris" << baris2 + 1 << " Kolom " << kolom2 + 1 << " : ";
            cin >> matriks2[baris2][kolom2];
        }
    }

    //Perkalian matriks 1 dan 2, hasil disimpan dalam matriks hasil
    for (int baris = 0; baris < 3; baris++) {
        for (int kolom = 0; kolom < 3; kolom++) {
            hasil[baris][kolom] = 0; // Inisialisasi hasil ke 0
            for (int kali = 0; kali < 3; kali++) { // Perkalian elemen baris x kolom
                hasil[baris][kolom] += matriks1[baris][kali] * matriks2[kali][kolom];
            }
        }
    }


    cout << "\nHasil perkalian matrik 1 dan 2 adalah:\n";
    for (int baris = 0; baris < 3; baris++) {
        for (int kolom = 0; kolom < 3; kolom++) {
            cout << hasil[baris][kolom] << " ";
        }
        cout << endl;
    }


}
