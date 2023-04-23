#include <iostream>
using namespace std;

// Membuat fungsi untuk menampilkan pesan
void msg(int tarif) {
    cout << "Total Harga Tiket Masuk: Rp " << tarif;
}

int main() {

    // Deklarasi variabel yang akan digunakan
    int umur, tinggi, tarif;
    tinggi = 0;

    // Membuat input untuk tiga variable tersebut
    cout << "Masukkan umur anak: ";
    cin >> umur;

    if(umur <= 1) {
        cout << "Dilarang masuk!" << endl;
        return 0;
    }

    cout << "Masukkan tinggi anak: ";
    cin >> tinggi;

    if (umur <= 3) {
        tarif = 30000;
        if(tinggi > 70) {
            tarif += 10000;
            cout << "Karena tinggi anak melebihi 70cm, maka tarif ditambah Rp 10.000"<< endl;
        }
    } else if (umur <= 7) {
        tarif = 40000;
        if(tinggi > 120) {
            tarif += 15000;
            cout << "Karena tinggi anak melebihi 120cm, maka tarif ditambah Rp 15.000" << endl;
        }
    } else if (umur <= 10) {
        tarif = 50000;
        if(tinggi > 150) {
            tarif += 20000;
            cout << "Karena tinggi anak melebihi 150cm, maka tarif ditambah Rp 20000" << endl;
        }
    } else {
        tarif = 80000;
    }

    msg(tarif);

    return 0;
}