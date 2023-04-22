#include <iostream>
using namespace std;

// Membuat fungsi untuk menampilkan pesan untuk hasil skor
void hasilMsg(string hasil) {
    if(hasil == "LOLOS" || hasil == "DIPERTIMBANGKAN") {
        cout << "Selamat Kamu Berhasil Menjadi Calon Programmer";
    } else {
        cout << "Maaf Kamu Belum Berhasil Menjadi Calon Programmer";
    }
}


int main() {

    // Deklarasi variabel yang akan digunakan
    int skorCoding;
    string skorInterview, hasil; 

    // Membuat input untuk skorCoding
    cout << "Masukkan skor Coding: ";
    cin >> skorCoding;

    // Membuat input untuk skorInterview
    cout << "Masukkan skor Interview: ";
    cin >> skorInterview;

    // Membuat kondisi untuk menentukan status test
    if(skorCoding > 80 && (skorInterview == "A" || skorInterview == "B")) {
        hasil = "LOLOS";
        hasilMsg(hasil);
    } else if(skorCoding > 80 && (skorInterview != "A" || skorInterview != "B")) {
        hasil = "GAGAL";
        hasilMsg(hasil);
    } else if((skorCoding >= 60 && skorCoding <= 80) && (skorInterview == "A" || skorInterview == "B")) {
        hasil = "DIPERTIMBANGKAN";
        hasilMsg(hasil);
    } else if((skorCoding >= 60 && skorCoding <= 80) && (skorInterview != "A" || skorInterview != "B")) {
        hasil = "GAGAL";
        hasilMsg(hasil);
    } else if(skorCoding < 60 && (skorInterview != "A" || skorInterview != "B")) {
        hasil = "GAGAL";
        hasilMsg(hasil);
    }

    return 0;
}