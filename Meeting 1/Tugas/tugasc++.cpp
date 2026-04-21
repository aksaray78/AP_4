#include <iostream>  //Library untuk fungsi input/output di C++
using namespace std;  // Perintah ini digunakan agar semua elemen di dalam namespace "std"
                      // dapat digunakan tanpa harus menuliskan awalan "std::"
                      // Contoh:
                      // Tanpa using namespace → std::cout, std::cin
                      // Dengan using namespace → cukup cout, cin

///Aksa Prawira Sukma 251401080///

int main() {  //Fungsi utama serta program mulai dari sini
    system("cls");  //Fungsi untuk membersihkan console

    string nama, nip, departemen, jabatan;  //Pendefinisian variable untuk nama, nip, departemen, dan jabatan dengan tipe data string
    int umur;  //Pendefinisian variable untuk umur dengan tipe data int
    float gaji;  //Pendefinisian variable untuk gaji dengan tipe data float

    cout <<"===========C++==========\n";  //Menampilkan judul kepala untuk bagian input
    cout <<"Input nama Anda: "; getline(cin, nama);  //Input nama yang menggunakan "getline" supaya spasi bisa digunakan
    cout <<"Input NIP Anda: "; cin >> nip;  //Input NIP 
    cout <<"Input umur Anda: "; cin >> umur;  //Input umur 
    cin.ignore();  //Menghapus karakter newline tersisa agar getline berikutnya berjalan benar
    cout <<"Input departemen Anda: "; getline(cin, departemen);  //Input departemen yang menggunakan "getline" supaya spasi bisa digunakan
    cout <<"Input jabatan Anda: "; getline(cin, jabatan);  //Input jabatan yang menggunakan "getline" supaya spasi bisa digunakan
    cout <<"Input gaji Anda [/Juta]: "; cin >> gaji;  //Input gaji 

    cout <<"\n";  //Menampilkan satu baris tambahan untuk memisahkan antara bagian input dan output

    cout <<"======DATA KARYAWAN=====\n";  //Menampilkan judul kepala untuk bagian output
    cout <<"Nama: " << nama <<"\n";  //Menampilkan nama yang telah diinput
    cout <<"NIP: " << nip <<"\n";  //Menampilkan NIP yang telah diinput
    cout <<"Umur: " << umur <<" Tahun\n";  //Menampilkan umur yang telah diinput
    cout <<"Departemen: " << departemen <<"\n";  //Menampilkan departemen yang telah diinput 
    cout <<"Jabatan: " << jabatan <<"\n";  //Menampilkan jabatan yang telah diinput
    cout <<"Gaji: " << gaji <<" Juta\n";  //Menampilkan gaji yang telah diinput 
    return 0;  //Kode di VSCode untuk mengakhiri program dengan status sukses
}

