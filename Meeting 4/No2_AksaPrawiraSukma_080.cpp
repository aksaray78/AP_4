#include <iostream>  //Library untuk fungsi input/output di C++
using namespace std;  // Perintah ini digunakan agar semua elemen di dalam namespace "std"
                      // dapat digunakan tanpa harus menuliskan awalan "std::"
                      // Contoh:
                      // Tanpa using namespace → std::cout, std::cin
                      // Dengan using namespace → cukup cout, cin

///Aksa Prawira Sukma 251401080///

void rahasia(string inputuser_param, int input_length_param) {  //Procedure rahasia yang berfungsi untuk melakukan operasi penambahan karakter per karakter dari sebuah kata dengan iterasi +1
    string hasil;  //Pendefinisan hasil dengan tipe data string dalam parameter rahasia
    for (int i = 0; i < input_length_param; i++) {  //Loopingan luar for untuk melakukan looping dari 0 sampai -1 panjang karakter dari kalimat inputan user dengan iterasi +1
        for (int j = 0; j<=i; j++) {  //Loopingan dalam for untuk melakukan looping dari 0 sampai sama dengan lebih kecil dari loopingan ke-i dengan iterasi +1
        hasil+= inputuser_param[j];  //Variable hasil akan selalu update dengan tambahan karakter baru sampai -1 dari total panjang inputan user
        }  //Penutup for dalam
    }  //Penutup for luar
    cout << hasil;  //Hasil dari operasi penambahan 1 demi 1 karakter akan ditampilkan 
}  //Penutup procedure rahasia

int main () {  //Main program
    system("cls");  //Fungsi untuk membersihkan console
    string input_user;  //Pendefinisian input_user dengan tipe data string
    cout << "Input sebuah kata: ";  //Teks yang meminta input user berupa kata akan ditamppilkan
    cin >> input_user;  //Menyimpan inputan user dalam variable input_user

    rahasia(input_user,input_user.length());  //Pemanggilan prosedur rahasia dengan parameter aktual input_user dan panjang dari input_user
}  //Penutup main program

