#include <stdio.h>  //Library untuk fungsi input/output di C
#include <stdlib.h>  //Library untuk menggunakan fungsi system("cls") supaya terminal bersih
#include <unistd.h>  //Library untuk fungsi sleep

///Aksa Prawira Sukma 251401080///

int main() {  //Fungsi utama serta program dimulai dari sini
    system("cls");  //Fungsi untuk membersihkan console
    
    const float pi = 3.14;  //Pendefinisian variable pi dengan tipe data konstanta
    float luas_permukaan, volume_bola;  //Pendefinisian variable luas_permukaan dan volume_bola dengan tipe data float
    int jari_jari;  //Pendefinisian variable jari_jari dengan tipe data integer

    printf("==========C==========");  //Menampilkan judul kepala penanda C
    fflush(stdout);  //fflush memaksa output tulisan sebelumnya tampil langsung tanpa ada buffer sehingga tidak terjadi overlap antar fungsi printf atau sleep
    sleep(1);  //Tunggu 1000 ms
    printf("\r                   \r");  //Menutupi teks "==========C==========" dan mengembalikan kursor ke depan

    printf("KALKULATOR LUAS PERMUKAAN DAN VOLUME BOLA (C)\n");  //Menampilkan judul kepala untuk bagian input
    printf("Input panjang jari-jari bola (cm): "); scanf("%d", &jari_jari);  //Input jari_jari dengan tipe data input %d
    
    luas_permukaan = 4*pi*jari_jari*jari_jari;  //Rumus untuk luas permukaan bola
    volume_bola = (4.0/3.0)*pi*jari_jari*jari_jari*jari_jari;  //Rumus untuk volume bola

    printf("Luas permukaan bola Anda: %.2f cm^2\n", luas_permukaan);  //Menampilkan hasil kalkulasi luas permukaan bola dengan batas float %.2f
    printf("Volume bola Anda: %.2f cm^3\n", volume_bola);  //Menampilkan hasil kalkulasi volume bola dengan batas float %.2f

    return 0;  //Kode di VSCode untuk mengakhiri program dengan status sukses
}