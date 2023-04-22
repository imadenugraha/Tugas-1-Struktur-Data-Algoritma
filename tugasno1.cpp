#include <iostream>
using namespace std;

// Membuat fungsi untuk melakukan output 
void Output(string nama, string pangkat) {
    cout << nama << " kemungkinan adalah seorang anggota mafia dengan pangkat" << pangkat << endl;
}

int main() {

    // Deklarasi variabel yang akan digunakan
    string nama, alamat, pangkat;
    int umur, totalTabungan;

    // Menerima input nama
    cout << "Masukkan nama mafia: ";
    cin >> nama;

    // Menerima input umur 
    cout << "Masukkan umur mafia: ";
    cin >> umur;

    // Menerima input tempat tinggal
    cout << "Masukkan daerah tempat tinggal: ";
    cin >> alamat;

    // Menerima input tabungan yang dimiliki
    cout << "Masukkan jumlah tabungan: ";
    cin >> totalTabungan;


    // Membuat percabangan untuk menentukan jenis mafia
    if((umur >= 40) && (alamat == "Nevada" || alamat == "NewYork" || alamat == "Havana") && (totalTabungan >= 10000000)){
        pangkat = "Don";
        Output(nama, pangkat);
    } else if((umur >= 25 && umur < 40) && (alamat == "NewJersey" || alamat == "Manhattan" || alamat == "Nevada") && (totalTabungan >= 1000000 && totalTabungan <= 2000000)) {
        pangkat = "Underboss";
        Output(nama, pangkat);
    } else if((umur >= 18 && umur < 24) && (alamat == "California" || alamat == "Detroit" || alamat == "Boston") && (totalTabungan < 1000000)) {
        pangkat = "Capo";
        Output(nama, pangkat);
    } else {
        cout << nama << " tidak mencurigakan";
    }

    return 0;
}