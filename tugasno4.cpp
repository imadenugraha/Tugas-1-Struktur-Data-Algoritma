#include <iostream>
using namespace std;

int main() {

    // Deklarasi variabel yang akan digunakan
    int exerciseType;
    char input;

    int totalCalories = 0;

    // Menggunakan perulangan do-while agar user dapat menginput lagi
    do {

    // Membuat input untuk jenis olahraga
    cout << "Masukkan jenis olahraga: " << "\n" << "1. Lari" << "\n" << "2. Push Up" << "\n" << "3. Plank" << "\n" << ">> ";
    cin >> exerciseType;

    // Membuat kondisi untuk menentukan kalori
    if(exerciseType == 1) {
        totalCalories += 60;
    } else if(exerciseType == 2) {
        totalCalories += 200;
    } else if(exerciseType == 3) {
        totalCalories += 5;
    } else {
        cout << "Olahraga tidak sesuai!";
    }

    // Melakukan konfirmasi kepada user
    cout << "\nApakah anda ingin menambahkan lagi? [Y/n] >> ";
    cin >> input;

    } while(input == 'Y' || input == 'y');
    cout << "Total Kalori: " << totalCalories;

    return 0;
}