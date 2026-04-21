#include <stdio.h>  //Library untuk fungsi input/output di C
#include <stdlib.h>  //Library untuk menggunakan fungsi system("cls") supaya terminal bersih

///Aksa Prawira Sukma 251401080///

int main() {  //Fungsi utama serta program dimulai dari sini
    system("cls");  //Fungsi untuk membersihkan console

    char nama[50], nip[50], departemen[50], jabatan[50];  //Pendefinisian variable untuk nama, nip, departemen, dan jabatan dengan tipe data char dengan panjang 50
    int umur;  //Pendefinisian variable untuk umur dengan tipe data int
    float gaji;  //Pendefinisian variable untuk gaji dengan tipe data float

    puts("==========C==========");  //Menampilkan judul kepala untuk bagian input
    printf("Input nama Anda: "); scanf(" %[^\n]", nama);  //Input nama yang menggunakan " %[^\n]" supaya spasi bisa digunakan
    printf("Input NIP Anda: "); scanf("%s", nip);  //Input NIP dengan tipe data input %s untuk string karena NIP selalu konstan
    printf("Input umur Anda: "); scanf("%d", &umur);  //Input umur dengan tipe data input %d/%i untuk integer
    printf("Input departemen Anda: "); scanf(" %[^\n]", departemen);  //Input departemen yang menggunakan " %[^\n]" supaya spasi bisa digunakan
    printf("Input jabatan Anda: "); scanf(" %[^\n]", jabatan);  //Input jabatan yang menggunakan " %[^\n]" supaya spasi bisa digunakan
    printf("Input gaji Anda [/Juta]: "); scanf("%f", &gaji);  //Input gaji dengan tipe data input %f untuk float karena gaji biasanya berkoma

    printf("\n");  //Menampilkan satu baris tambahan untuk memisahkan antara bagian input dan output

    printf("======DATA KARYAWAN=====\n");  //Menampilkan judul kepala untuk bagian output
    printf("Nama: %s\n", nama);  //Menampilkan nama yang telah diinput dengan tipe data input %s untuk string
    printf("NIP: %s\n", nip);  //Menampilkan NIP yang telah diinput dengan tipe data input %s untuk string
    printf("Umur: %d tahun\n", umur);  //Menampilkan umur yang telah diinput dengan tipe data input %i/%d untuk string
    printf("Departemen: %s\n", departemen);  //Menampilkan departemen yang telah diinput dengan tipe data input %s untuk string
    printf("Jabatan: %s\n", jabatan);  //Menampilkan jabatan yang telah diinput dengan tipe data input %s untuk string
    printf("Gaji: %.2f Juta\n", gaji);  //Menampilkan gaji yang telah diinput dengan tipe data input %.2f untuk membuat float dengan desimal dibatasi sampai digit puluhan saja

    return 0;  //Kode di VSCode untuk mengakhiri program dengan status sukses
}

