#include <iostream>
#include <iomanip>
using namespace std;

/*
    PROGRAM PEMROGRAMAN MODULAR
    Materi:
    - Modular Function
    - Parameter
    - Return Value
    - Prosedur (Void)
    - Percabangan IF
    - Input dan Output
*/

// Function untuk menghitung luas segitiga
double luasSegitiga(double alas, double tinggi) {
    return 0.5 * alas * tinggi;
}

// Function untuk menghitung luas persegi
double luasPersegi(double sisi) {
    return sisi * sisi;
}

// Function untuk menghitung luas lingkaran
double luasLingkaran(double jariJari) {
    const double PI = 3.14159;
    return PI * jariJari * jariJari;
}

// Procedure untuk menampilkan menu
void tampilkanMenu() {
    cout << "\n====================================\n";
    cout << "       PROGRAM HITUNG LUAS\n";
    cout << "====================================\n";
    cout << "1. Luas Segitiga\n";
    cout << "2. Luas Persegi\n";
    cout << "3. Luas Lingkaran\n";
    cout << "4. Keluar\n";
    cout << "====================================\n";
}

// Procedure untuk menampilkan hasil
void tampilkanHasil(double hasil) {
    cout << fixed << setprecision(2);
    cout << "\nLuas = " << hasil << endl;
}

int main() {
    int menu;
    double alas, tinggi, sisi, jariJari;
    double hasil;

    do {
        tampilkanMenu();

        cout << "Pilih menu: ";
        cin >> menu;

        if (menu == 1) {
            cout << "\n--- LUAS SEGITIGA ---\n";
            cout << "Masukkan alas   : ";
            cin >> alas;
            cout << "Masukkan tinggi : ";
            cin >> tinggi;

            hasil = luasSegitiga(alas, tinggi);
            tampilkanHasil(hasil);

        } else if (menu == 2) {
            cout << "\n--- LUAS PERSEGI ---\n";
            cout << "Masukkan sisi: ";
            cin >> sisi;

            hasil = luasPersegi(sisi);
            tampilkanHasil(hasil);

        } else if (menu == 3) {
            cout << "\n--- LUAS LINGKARAN ---\n";
            cout << "Masukkan jari-jari: ";
            cin >> jariJari;

            hasil = luasLingkaran(jariJari);
            tampilkanHasil(hasil);

        } else if (menu == 4) {
            cout << "\nProgram selesai. Terima kasih!\n";

        } else {
            cout << "\nMenu tidak tersedia. Silakan pilih 1-4.\n";
        }

    } while (menu != 4);

    return 0;
}
