#include <iostream>
using namespace std;

void sapa (string nama) {//void itu tipe data yang biasa dipakai untuk fungsi
    cout << "Halo, apa kabar " << nama << "! Selamat belajar C++" << endl;
}//function void itu membalikkan nilai void jadi gabisa return 0

int main() {//kenapa pakai int sebagai main? nanti ada return 0 soalnya
    system("cls");
    string namapengguna = "Aksa";
    sapa(namapengguna);
    return 0;
}