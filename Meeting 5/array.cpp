#include <iostream>
#include <string>
#include <array>
using namespace std;

int main() {
system("cls");

//Array declaration

/* 2 cara membuat array
1. array kosong*/
// string nama[5]; //cuma menerima 5 data dan bisa input spasi kayak getline
//char nilai[5]; ini membatasi menjadi 5 karakter

// nama[0] = "Alya";
// nama[1] = "Rizky"; 
// nama[2] = "Rifki";
// nama[3] = "Fatih";
// nama[4] = "Dhafa";
// nama[5] = "Udin"; // ini tuh gabisa.

// for (int i = 0; i <= 5; i++) {
// cout << "Nama dari indeks ke- " << i << ": " << nama[i] << endl;
// }

// cout << "Masukkan 5 nama: " << endl;
// for (int i = 0; i <= 4; i++) {
//     cout << "Nama ke-" << i + 1 << ": ";
//     cin >> nama[i];
// }

// for (int i = 0; i <= 4; i++) {
// cout << "Nama dari indeks ke- " << i << ": " << nama[i] << endl;
// }

//lets say kita udah buat isi dari array dan misal kita minta lagi pakai cin maka bakalan pakai yang cin

//Array langsung di isi, gaperlu tau isinya berapa
// string nama[5] = {"Alya", "Rizky", "Rifky", "Fatih", "Daffa"};
// string nama[] = {"Alya", "Rizky", "Rifky", "Fatih", "Daffa"};

// //Ascending element in array
// cout << "Ascending" << endl;
// for (int i = 0; i<5; i++) {
//     cout << "Nama ke-" << i + 1 << ": " << nama[i] << endl;
// }

// cout << endl;

// //Descending element in array
// cout << "Descending" << endl;
// for (int i = 4; i>=0; i--) {
//     cout << "Nama ke-" << i + 1 << ": " << nama[i] << endl;
// }

//Multidimensional array
// int matrix[2][3] = {{1,2,3} , {4,5,6}};
// cout << "Matrix 2x3:" << endl;
// for (int i = 0; i < 2; i++) {
//     for (int j = 0; j < 3; j++) {
//         cout << matrix[i][j] << " ";
//     }
//     cout << endl;
// }

// int matrix1[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
// cout << "Matrix 3x3:" << endl;
// for (int i = 0; i < 3; i++) {
//     for (int j = 0; j < 3; j++) {
//         cout << matrix1[i][j] << " ";
//     }
//     cout << endl;
// }

//matirx 4x6

//String (array of char)
string nama1 = "Azriel";
// cout << nama1[0] << endl;
// cout << nama1[2] << endl;
// cout << nama1[5] << endl;

// for (int i = 0; i < nama1.length(); i++) {
//     cout << nama1[i] << endl;
// }

string s1 = "Hello", s2 = "World";
s1 = s2; // hello ketimpa world
cout << s1 << endl;

cout << s1 + s2 << endl; // worldworld

cout << (s1+s2).length() << endl;

cout <<s1.substr(2,4) << endl; //rld
cout << (s1+s2).substr(5,3) << endl; //mulai dari karakter ke 5 lanjut sebanyak 3

//Operator sizeof()
short angka = 90;
cout << "Ukuran integer: " << sizeof(angka) << " bytes" << endl;

int nilai[] = {10,20,30,40,50};
cout << "Ukuran array nilai: " <<sizeof(nilai) << " bytes" << endl;

string s = "A";
cout << "Ukuran string: " <<sizeof(s) << " bytes" << endl;

string nama_karyawan[] = {"Budi", "Suep", "Aldi", "Cecep"};
}