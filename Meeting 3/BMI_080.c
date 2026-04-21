#include <stdio.h>  //Library untuk fungsi input/output di C

///Aksa Prawira Sukma 251401080///

int main() {  //Fungsi utama serta program dimulai dari sini
    system("cls");  //Fungsi untuk membersihkan console

    float berat, tinggi, bmi;  //Pendefinisian variable berat, tinggi, dan bmi dengan tipe data float
    printf("==========C==========");  //Menampilkan judul kepala penanda C
    fflush(stdout);  //fflush memaksa output tulisan sebelumnya tampil langsung tanpa ada buffer sehingga tidak terjadi overlap antar fungsi printf atau sleep
    sleep(1);  //Tunggu 1000 ms
    printf("\r                     \r");  //Menutupi teks "==========C==========" dan mengembalikan kursor ke depan

    printf("KALKULATOR BMI (C)\n");  //Menampilkan judul "KALKULATOR BMI"
    printf("Input berat badan Anda (kg): "); scanf("%f", &berat);  //Input berat badan dengan tipe data input %f
    printf("Input tinggi badan Anda (cm): "); scanf("%f", &tinggi);  //Input tinggi badan dengan tipe data input %f

    bmi = berat/((tinggi/100)*(tinggi/100));  //Rumus untuk menghitung bmi dengan menggunakan berat badan (kg) dan tinggi badan (m)

    printf("BMI Anda: %f\n",bmi);  //Menampilkan hasil perhitungan bmi
    if (bmi<18.5) {  //Kondisi jika hasil bmi < 18.5
        printf("Berat badan Anda terkategori kurang!");  //Maka berat badan terkategori kurang
    } else if (bmi<25) {  //Kondisi jika hasil bmi < 25
        printf("Berat badan Anda terkategori normal!");  //Maka berat badan terkategori normal
    } else if (bmi<30) {  //Kondisi jika hasil bmi < 30
        printf("Berat badan Anda terkategori berlebih!");  //Maka berat badan terkategori berlebih
    } else {  //Kondisi jika hasil bmi selain tiga kondisi di atas
        printf("Berat badan Anda terkategori obesitas!");  //Maka berat badan terkategori obesitas
    }
    return 0;  //Kode di VSCode untuk mengakhiri program dengan status sukses
}