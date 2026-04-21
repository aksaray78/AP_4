#include <iostream>  //Library untuk fungsi input/output di C++
#include <cstdlib>  //Library untuk menggunakan fungsi system("cls") supaya terminal bersih
#include <unistd.h>  //Library untuk fungsi sleep
#include <iomanip>  //Library untuk fungsi setprecision dimana akan mengatur panjang desimal
using namespace std;  // Perintah ini digunakan agar semua elemen di dalam namespace "std"
                      // dapat digunakan tanpa harus menuliskan awalan "std::"
                      // Contoh:
                      // Tanpa using namespace → std::cout, std::cin
                      // Dengan using namespace → cukup cout, cin

///Aksa Prawira Sukma 251401080///

int main() {  //Fungsi utama serta program dimulai dari sini
    system("cls");  //Fungsi untuk membersihkan console
    
    const float pi = 3.14;  //Pendefinisian variable pi dengan tipe data konstanta
    float luas_permukaan, volume_bola;  //Pendefinisian variable luas_permukaan dan volume_bola dengan tipe data float
    int jari_jari;  //Pendefinisian variable jari_jari dengan tipe data integer

    cout << "==========C++==========";  //Menampilkan judul kepala penanda C++
    cout.flush();  //attribute flush memaksa output tulisan sebelumnya tampil langsung tanpa ada buffer sehingga tidak terjadi overlap antar fungsi printf atau sleep
    sleep(1);  //Tunggu 1000 ms
    cout << "\r                     \r";  //Menutupi teks "==========C++==========" dan mengembalikan kursor ke depan

    cout << "KALKULATOR LUAS PERMUKAAN DAN VOLUME BOLA (C++)\n";  //Menampilkan judul kepala untuk bagian input
    cout << "Input panjang jari-jari bola (cm): "; cin >> jari_jari;  //Input jari_jari dengan tipe data input %d
    
    luas_permukaan = 4*pi*jari_jari*jari_jari;  //Rumus untuk luas permukaan bola
    volume_bola = (4.0/3.0)*pi*jari_jari*jari_jari*jari_jari;  //Rumus untuk volume bola

    cout << fixed << setprecision(2);  //Fungsi setprecision mengatur panjang digit di belakang koma

    cout << "Luas permukaan bola Anda: " << luas_permukaan << " cm^2" << endl;  //Menampilkan hasil kalkulasi luas permukaan bola dengan batas float %.2f
    cout << "Volume bola Anda: " << volume_bola << " cm^3" <<  endl;  //Menampilkan hasil kalkulasi volume bola dengan batas float %.2f

    return 0;  //Kode di VSCode untuk mengakhiri program dengan status sukses
}
