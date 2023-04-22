#include <iostream>
using namespace std;

int main() {

    // Deklarasi variabel yang akan digunakan
    int jenisOlahraga;
    char input;

    int totalKalori = 0;

    // Menggunakan perulangan do-while agar user dapat menginput lagi
    do {

    // Membuat input untuk jenis olahraga
    cout << "Masukkan jenis olahraga: " << "\n" << "1. Lari" << "\n" << "2. Push Up" << "\n" << "3. Plank" << "\n" << ">> ";
    cin >> jenisOlahraga;

    // Membuat kondisi untuk menentukan kalori
    if(jenisOlahraga == 1) {
        totalKalori += 60;
    } else if(jenisOlahraga == 2) {
        totalKalori += 200;
    } else if(jenisOlahraga == 3) {
        totalKalori += 5;
    } else {
        cout << "Olahraga tidak sesuai!";
    }

    // Melakukan konfirmasi kepada user
    cout << "\nApakah anda ingin menambahkan lagi? [Y/n] >> ";
    cin >> input;

    } while(input == 'Y' || input == 'y');
    cout << "Total Kalori: " << totalKalori;

    return 0;
}