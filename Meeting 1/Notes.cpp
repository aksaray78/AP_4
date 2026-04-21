#include <iostream>
#include <conio.h>  //getch(), getche(), putchar()
using namespace std;

int main() {
    system("cls");
    string nama, nim, waktu;
    char kom, jenis_kelamin;
    float ipk;

    cout << "Data Mahasiswa\n"; 
    //space dihitung sebagai buffer jadi misal input aksa prawira yang kebaca cuma aksa
    cout <<"Masukkan nama: ";
    getline(cin, nama); 
    //supaya nama setelah spasi bisa dibaca
    cout <<"Masukkan Kom: "; cin >> kom;
    cout <<"Masukkan NIM: "; cin >> nim;
    cout <<"Masukkan IPK: "; cin >> ipk;
    cout <<"Masukkan jenis kelamin Anda (L/P): "; 
    jenis_kelamin = getche(); //hanya menerima satu karakter dan lanjut tanpa enter
    //get character dan tampilkan karakter
    cout <<"\n"; //getcharacterandeco 

    cout <<"Nama: "<< nama <<endl;
    cout <<"Kom: "<< kom <<endl;
    cout <<"NIM: "<< nim <<endl;
    cout <<"IPK: "<< ipk <<endl;
    cout <<"Jenis kelamin: ";
    putchar(jenis_kelamin);//harus ada kalau pakai getche
    cout << endl;

    //alt shift arrow kebawah untuk duplikasi txt
    //ctrl shift l untuk select banyak yang sama 
    //block text dan tekan ctrl+/

    // Inputan waktu (pagi,siang,sore,malam)
    cout <<"Masukkan waktu: "; cin >> waktu;
    // Selamat pagi, Aksa Sukma!
    cout << "Selamat " << waktu << ", " << nama;

    getch();  //agar program tidak langsung selesai dan tidak menampilkan
}