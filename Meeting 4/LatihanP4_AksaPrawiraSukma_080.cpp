#include <iostream>  //Library untuk fungsi input/output di C++
using namespace std;  // Perintah ini digunakan agar semua elemen di dalam namespace "std"
                      // dapat digunakan tanpa harus menuliskan awalan "std::"
                      // Contoh:
                      // Tanpa using namespace → std::cout, std::cin
                      // Dengan using namespace → cukup cout, cin

///Aksa Prawira Sukma 251401080///

int main () {  //Main program
    system("cls");  //Fungsi untuk membersihkan console
    //1,8,16,23,46
    int i, inputuser, current;  //Pendefinisian variable i untuk loopingan pola, inputuser untuk pilihan batas looping oleh user, current untuk penjumlahan operasi angka
    cout << "Input banyak angka: ";  //Tampilan teks untuk meminta inputan batas pilihan user
    cin >> inputuser;  //Program menyimpan inputan user dalam variable inputuser
    current = 1;  //Set variable current menjadi satu karena pola dimulai dari satu
    for (i = 0; i < inputuser; i++) {  //Loopingan for dengan dimulai dari nol, batas lebih kecil dari inputan user, dan diterasi +1
        cout << current << " ";  //Setiap menampilkan hasil operasi current yang baru, akan ditampilkan variable current yang terkini disertai spasi
        if (i%2 == 0) {  //Operasi if dimana jika urutan i untuk current bisa dibagi 2 dengan hasil mod 0 maka current +7 (sesuai pola)
            current+=7;  //Current yang terkini akan ditambahkan 7 (current = current + 7)
        } else {  //Operasi else dimana jika urutan i ganjil (dimulai dari 0, contoh jika i = 4 maka current yang terkini akan dikali 2)
            current*=2;  //Current yang terkini akan dikalikan 2 (current = current * 2)
        }  //Penutup else
    }  //Penutup for
}  //Penutup main program