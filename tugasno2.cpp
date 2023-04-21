#include <iostream>
using namespace std;

// Membuat fungsi untuk menampilkan pesan untuk hasil skor
void resultMsg(string result) {
    if(result == "LOLOS" || result == "DIPERTIMBANGKAN") {
        cout << "Selamat Kamu Berhasil Menjadi Calon Programmer";
    } else {
        cout << "Maaf Kamu Belum Berhasil Menjadi Calon Programmer";
    }
}


int main() {

    // Deklarasi variabel yang akan digunakan
    int codingScore;
    string interviewScore, result; 

    // Membuat input untuk codingScore
    cout << "Masukkan skor Coding: ";
    cin >> codingScore;

    // Membuat input untuk interviewScore
    cout << "Masukkan skor Interview: ";
    cin >> interviewScore;

    // Membuat kondisi untuk menentukan status test
    if(codingScore > 80 && (interviewScore == "A" || interviewScore == "B")) {
        result = "LOLOS";
        resultMsg(result);
    } else if(codingScore > 80 && (interviewScore != "A" || interviewScore != "B")) {
        result = "GAGAL";
        resultMsg(result);
    } else if((codingScore >= 60 && codingScore <= 80) && (interviewScore == "A" || interviewScore == "B")) {
        result = "DIPERTIMBANGKAN";
        resultMsg(result);
    } else if((codingScore >= 60 && codingScore <= 80) && (interviewScore != "A" || interviewScore != "B")) {
        result = "GAGAL";
        resultMsg(result);
    } else if(codingScore < 60 && (interviewScore != "A" || interviewScore != "B")) {
        result = "GAGAL";
        resultMsg(result);
    }

    return 0;
}