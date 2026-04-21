#include <iostream>  //Library untuk fungsi input/output di C++
#include <cctype>  //tolower(), and //toupper()
using namespace std;  // Perintah ini digunakan agar semua elemen di dalam namespace "std"
                      // dapat digunakan tanpa harus menuliskan awalan "std::"
                      // Contoh:
                      // Tanpa using namespace → std::cout, std::cin
                      // Dengan using namespace → cukup cout, cin

///Aksa Prawira Sukma 251401080///

void upperprocedure(string inputuser_param, int input_length_param) {  //Procedure upperprocedure yang berfungsi untuk melakukan operasi perubahan semua karakter menjadi kapital
                   //Terdapat dua parameter formal yaitu inputuser_param dan input_length_param
    string hasil;  //Pendefinisan hasil dengan tipe data string dalam parameter upperprocedure
    for (int i = 0; i < input_length_param; i++) {  //Loopingan for untuk melakukan looping dari 0 sampai -1 panjang karakter dari kalimat inputan user dengan iterasi +1
        hasil+= toupper(inputuser_param[i]);  //Fungsitoupper memproses variable inputuser_param berdasarkan index karakter dimana dimulai dari 0 sampai -1 panjang karakter dari seluruh kalimat dan membuat karakter menjadi kapital
    }  //Penutup for
    cout << "Kalimat setelah di konversi: " << hasil;  //Hasil dari konversi akan ditampilkan 
}  //Penutup procedure

int main () {  //Main program
    system("cls");  //Fungsi untuk membersihkan console
    string input_user;  //Pendefinisian input_user dengan tipe data string
    cout << "Kalimat sebelum di konversi: ";  //Teks yang meminta input user berupa kaliamt akan ditamppilkan
    getline(cin,input_user);  //Getline berfungsi untuk menerima semua karakter beserta spasi dari inputan user

    upperprocedure(input_user,input_user.length());  //Pemanggilan upperprocedure dengan parameter aktual input_user dan panjang dari input_user
}  //Penutup main program
