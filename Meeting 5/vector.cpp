#include <iostream>
#include <string>
#include <array>
#include <vector>
using namespace std;

int main() {
system("cls");
int n, banyak;

// vektor
vector<string> nama = {"Alya", "Rizky", "Rifki", "Fatih", "Dhafa"};

for (string karyawan : nama) {
    cout << karyawan << endl;
}

//Add data to vector
// nama.push_back("Fatih"); //push data ke paling belakang
// cout << "Setelah menambah data: " << endl;
// for (string karyawan : nama) {
//     cout << karyawan << endl;
// }

// nama.pop_back();
// cout << "Setelah menghapus data: " << endl;
// for (string karyawan : nama) {
//     cout << karyawan << endl;
// }

// nama.erase(nama.begin() + 3); //menghapus yang kita mau, nama.begin() itu nomor 1
// cout << "Setelah menghapus data: " << endl;
// for (string karyawan : nama) {
//     cout << karyawan << endl;
// }

//Ngehapus yang kita mau
// nama.erase(nama.begin() + 2, nama.begin() + 4);
// cout << "Setelah menghapus data: " << endl;
// for (string karyawan : nama) {
//     cout << karyawan << endl;
// }

}