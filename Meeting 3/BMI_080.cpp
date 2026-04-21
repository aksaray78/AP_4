#include <iostream>  //Library untuk fungsi input/output di C++
#include <unistd.h>  //Library untuk fungsi sleep
using namespace std;  // Perintah ini digunakan agar semua elemen di dalam namespace "std"
                      // dapat digunakan tanpa harus menuliskan awalan "std::"
                      // Contoh:
                      // Tanpa using namespace → std::cout, std::cin
                      // Dengan using namespace → cukup cout, cin

///Aksa Prawira Sukma 251401080///

int main() {
    system("cls");  //Fungsi untuk membersihkan console

    float berat, tinggi, bmi;  //Pendefinisian variable berat, tinggi, dan bmi dengan tipe data float
    cout << "==========C++==========";  //Menampilkan judul kepala penanda C++
    cout.flush();  //attribute flush memaksa output tulisan sebelumnya tampil langsung tanpa ada buffer sehingga tidak terjadi overlap antar fungsi printf atau sleep
    sleep(1);  //Tunggu 1000 ms
    cout << "\r                       \r";  //Menutupi teks "==========C++==========" dan mengembalikan kursor ke 
    
    cout << "KALKULATOR BMI (C++)" << endl;  //Menampilkan judul "KALKULATOR BMI"
    cout << "Input berat badan Anda (kg): "; cin >> berat;  //Input berat badan dengan tipe data input %f
    cout << "Input tinggi badan Anda (cm): "; cin >> tinggi;  //Input tinggi badan dengan tipe data input %f
    
    bmi = berat/((tinggi/100)*(tinggi/100));  //Rumus untuk menghitung bmi dengan menggunakan berat badan (kg) dan tinggi badan (m)

    cout << "BMI Anda: " << bmi << endl;  //Menampilkan hasil perhitungan bmi
    if (bmi<18.5) {  //Kondisi jika hasil bmi < 18.5
        cout << "Berat badan Anda terkategori kurang!";  //Maka berat badan terkategori kurang
    } else if (bmi<25) {  //Kondisi jika hasil bmi < 25
        cout << "Berat badan Anda terkategori normal!";  //Maka berat badan terkategori normal
    } else if (bmi<30) {  //Kondisi jika hasil bmi < 30
        cout << "Berat badan Anda terkategori berlebih!";  //Maka berat badan terkategori berlebih
    } else {  //Kondisi jika hasil bmi selain tiga kondisi di atas
        cout << "Berat badan Anda terkategori obesitas!";  //Maka berat badan terkategori obesitas
    }
    return 0;  //Kode di VSCode untuk mengakhiri program dengan status sukses
}