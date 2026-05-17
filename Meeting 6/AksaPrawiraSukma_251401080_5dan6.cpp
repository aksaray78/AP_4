#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
using namespace std;

//Aksa Prawira Sukma 251401080//

vector<int> data_benar;
vector<int> data_total;

int ambil_angka() {
    return (rand() % 20) + 1;
}

char ambil_operasi() {
    char operasi[4] = {'+', '-', '*', '%'}; 
    return operasi[rand() % 4];
}

int cek_jawaban(int a, int b, char op) {
    if (op == '+') {
        return a + b;
    } 
    else if (op == '-') {
        return a - b;
    } 
    else if (op == '*') {
        return a * b;
    } 
    else if (op == '%') {
        if (b == 0) { 
            b = 2; 
        }
        return a % b;
    }
    return 0;
}

void tampilan_data_user(){
    system("cls");
    cout << "*%-+/DATA USER/+-%*" << endl;

    if (data_benar.empty()) {
        cout << "Belum Ada Soal Yang Dikerjakan!" << endl;
    } 
    else {
        for (int i = 0; i < data_benar.size(); i++) {
            cout << "Sesi " << i+1 << ": " << data_benar[i] << "/" << data_total[i] << endl;
        }
    }

    cout << "\nEnter Untuk Kembali: ";
    cin.ignore(); 
    cin.get();
}

void kuis_baru(){
    int jumlah_soal, jawaban_user, jumlah_benar = 0;

    do{
        system("cls");
        cout << "Jumlah Soal (1-10): ";
        if (!(cin >> jumlah_soal)) {
            cin.clear();          
            cin.ignore(100, '\n');  
            continue;       
        }
    } while (jumlah_soal > 10 || jumlah_soal <= 0);

    for (int i = 1; i <= jumlah_soal; i++){
        int angka1 = ambil_angka();
        int angka2 = ambil_angka();
        char op_terpilih = ambil_operasi();
         
        int jawaban_benar = cek_jawaban(angka1, angka2, op_terpilih);

        cout << i << ". " << angka1 << " " << op_terpilih << " " << angka2 << " = ";
        cin >> jawaban_user;

        if (jawaban_user == jawaban_benar) {
            jumlah_benar++;
        }
    }
    
    data_benar.push_back(jumlah_benar);
    data_total.push_back(jumlah_soal);

    cout << "\nSkor: " << jumlah_benar << "/" << jumlah_soal;

    cout << "\nEnter Untuk Kembali: ";
    cin.ignore(); 
    cin.get();   
}

int main(){
    srand(time(0));
    string nama[1];
    int pilih;

    do{
    system("cls");
    cout << "Input Nama Anda: ";
    getline(cin, nama[0]);
    } while (nama[0].empty());

    do{
    system("cls");
    cout << "*%-+/PROGRAM GENERATOR SOAL ARITMATIKA/+-%*" << endl;
    cout << "1. Mulai Kuis Baru" << endl;
    cout << "2. Data User" << endl;
    cout << "3. Keluar" << endl;
    cout << "Silahkan Pilih, " << nama[0] << ": ";

    if (!(cin >> pilih)) {
        cin.clear();
        cin.ignore(100, '\n');
        continue;
    }

    switch(pilih){
        case 1:
            kuis_baru();
            break;
        case 2:
            tampilan_data_user();
            break;
        case 3:
            cout << "\nTerima Kasih & Sampai Jumpa, " << nama[0] << "!";
            break;
        default:
            cout << "Pilihan Tidak Valid!";
            break;
    }
    } while (pilih != 3);

    return 0;
}