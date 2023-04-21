#include <iostream>
using namespace std;

// Membuat fungsi untuk melakukan output 
void Output(string name, string rank) {
    cout << name << " kemungkinan adalah seorang anggota mafia dengan pangkat" << rank << endl;
}

int main() {

    // Deklarasi variabel yang akan digunakan
    string name, address, rank;
    int age, totalSavings;

    // Menerima input nama
    cout << "Masukkan nama mafia: ";
    cin >> name;

    // Menerima input umur 
    cout << "Masukkan umur mafia: ";
    cin >> age;

    // Menerima input tempat tinggal
    cout << "Masukkan daerah tempat tinggal: ";
    cin >> address;

    // Menerima input tabungan yang dimiliki
    cout << "Masukkan jumlah tabungan: ";
    cin >> totalSavings;


    // Membuat percabangan untuk menentukan jenis mafia
    if((age >= 40) && (address == "Nevada" || address == "NewYork" || address == "Havana") && (totalSavings >= 10000000)){
        rank = "Don";
        Output(name, rank);
    } else if((age >= 25 && age < 40) && (address == "NewJersey" || address == "Manhattan" || address == "Nevada") && (totalSavings >= 1000000 && totalSavings <= 2000000)) {
        rank = "Underboss";
        Output(name, rank);
    } else if((age >= 18 && age < 24) && (address == "California" || address == "Detroit" || address == "Boston") && (totalSavings < 1000000)) {
        rank = "Capo";
        Output(name, rank);
    } else {
        cout << name << " tidak mencurigakan";
    }

    return 0;
}