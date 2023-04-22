#include <iostream>
using namespace std;

int main() {

    // Deklarasi variabel yang digunakan
    int backNumber;
    string posisi1 = "target attacker";
    string posisi2 = "berhak dipilih menjadi target team";
    string posisi3 = "defender";
    string posisi4 = "Playmaker";
    string posisi5 = "keeper";

    // Membuat input untuk nomor punggung
    cout << "Masukkkan nomor punggung: ";
    cin >> backNumber;

    // Membuat kondisi untuk menentukan posisi
    if((backNumber % 2 == 0) && (backNumber >= 50 && backNumber <= 100)) {
        cout << "Posisi yang dapat dipilih: " << "\n" << posisi1 << "\n"<< posisi2 << endl;
    } else if(backNumber % 2 == 0) {
        cout << "Posisi yang dapat dipilih: " << "\n" << posisi1 << endl;
    } else if((backNumber % 2 != 0) && (backNumber > 90) && (backNumber % 3 == 0 && backNumber % 5 == 0)) {
        cout << "Posisi yang dapat dipilih: " << "\n" << posisi3 << "\n" << posisi4 << "\n" << posisi5 << endl;
    } else if((backNumber % 2 != 0) && (backNumber > 90)) {
        cout << "Posisi yang dapat dipilih: " << "\n" << posisi3 << "\n" << posisi4 << endl;
    } else if((backNumber % 2 != 0) && (backNumber % 3 == 0 && backNumber % 5 == 0)) {
        cout << "Posisi yang dapat dipilih: " << "\n" << posisi3 << "\n" << posisi5 << endl;
    } else if(backNumber % 2 != 0) {
        cout << "Posisi yang dapat dipilih: " << "\n" << posisi3 << endl;
    }

    return 0; 
}