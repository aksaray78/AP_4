#include <iostream>
using namespace std;

int tambahBiasa(int par1, int par2) {
    par1 += par2;
    return par1;
}

int tambahPointer(int *par1, int *par2) {
    *par1 += *par2;
    return *par1;
}
    //pointer itu menunjuk sebuah variable dimana ia menunjuk alamat memori dari variablenya
    //& menunjukkan address of the variable (ampersand)
    //* menunjukkan value of the variable (asterisk)

    //tipe_data *nama_pointer;

    //untuk mengolah data kompleks
    //untuk memanipulasi data langsung di dalam fungsi
    //struktur data dinamis (linked list, queue, stack)
    //akses memori efisien

    //hexadecimal 0..9 a..f (0x61ff08)
int main(){
    system("cls");
    
    // int var = 10;
    // int *ptr;

    // ptr = &var;

    // cout << "ALAMAT dari VARIABEL var                    --> " << &var << endl;
    // cout << "ALAMAT YANG DITUNJUK oleh pointer           --> " << ptr << endl;
    // cout << "ISI dari ALAMAT YANG DITUNJUK oleh pointer  --> " << *ptr << endl;

    //case di mana pointer not exactly "menunuk sebuah variabel, melainkan menunjuk sebuah nilai (array) /special case ini"

    // char *ptr;
    // ptr = "jakarta";// jadi kalau kita print ptr yang array gini, cuma di kasus ini dia bakalan ngeluarin output isi array nya semua
    
    // cout << ptr << endl;
    // cout << *ptr << endl;

    //pointer lgsg ke char
    // char *ptr;
    // *ptr = 'b'; //karena 1 byte jadi lgsg bisa dioutput, jadi dia karena kebetulan dia char

    // cout << ptr;

    //ini adalah contoh penggunaan pointer yang salah
    //pointer to undefined behaviour
    // int *ptr;// ini gak nunjuk kemana addressnya jadi bingung dan dia ke random address memory
    // *ptr = 10; //--> 4int itu 4 byte jadi bingung dia mau output yang mana bytenya, jadi gabakalan output apa apa

    // cout << ptr;
    // cout << *ptr;
    // cout << "hai"; // ini gabakalan dioutput karena program udah bingung pas sampai di line 45 tadi jadi udah crash duluan

    //OPERASI LOGIKA PADA VAR POINTER

    // int a = 100, b = 200;
    // int *pa, *pb;

    // pa = &a;
    // pb = &b;

    // cout << pa << endl;
    // cout << pb << endl;

    // if (pa > pb) {
    //     cout << "alamat pa > pb" << endl;
    // } else if (pb > pa) {
    //     cout << "alamat pa < pb" << endl;       
    // } else if (pb == pa) {
    //     cout << "alamat pa = pb" << endl;
    // }

    // if (*pa > *pb) {
    //     cout << "isi pa > pb" << endl;
    // } else if (*pb > *pa) {
    //     cout << "isi pa < pb" << endl;       
    // } else if (*pb == *pa) {
    //     cout << "isi pa = pb" << endl;
    // // }

    // //POINTER TO ARRAY
    // int arr[] = {10,20,30,40,50,60};
    // int *ptr1;

    // ptr1 = arr;//kalau pointer ke array gaperlu pakau address of (&)
    // //bisa aja ptr = &arr[0];
    // //kalo ptr1 = &arr; ini bakalan error karena dia nunjuk index mana gitu bes
    // //it will automatically point to the first element in array
    // cout << "Alamat yang ditunjuk pointer              : " << ptr1 << endl;
    // cout << "Alamat yang ditunjuk array index 0        : " << &arr[0] << endl;
    // cout << "Alamat yang ditunjuk array index 1        : " << &arr[1] << endl;
    // cout << "Isi dari alamat yang ditunjuk pointer     : " << *ptr1 << endl;
    // cout << "Isi dari alamat yang ditunjuk pointer + 1 : " << *(ptr1+1) << endl;

    // //POINTER IN ARRAY OF CHAR
    // char arr1[] = "indonesia";
    // char *ptr2;

    // ptr2 = arr1;
    // //it will automatically point to the first element in array
    // cout << "Alamat yang ditunjuk pointer              : " << ptr2 << endl;
    // cout << "Alamat yang ditunjuk array index 0        : " << &arr1[0] << endl;
    // cout << "Alamat yang ditunjuk array index 1        : " << &arr1[1] << endl;
    // cout << "Alamat yang ditunjuk array index 1        : " << &arr1[3] << endl;
    // cout << "Isi dari alamat yang ditunjuk pointer     : " << *ptr2 << endl;
    // cout << "Isi dari alamat yang ditunjuk pointer + 1 : " << *(ptr2+1) << endl;

    // //POINTER TO POINTER
    // string var = "JOKO";
    // string *ptr, **ptr_2;

    // ptr = &var;
    // ptr_2 = &ptr;

    // cout << "Nilai var                      : " << var << endl;
    // cout << "Nilai Pointer 1 (no bintang)   : " << ptr << endl;
    // cout << "Nilai Pointer 1 (1 bintang)    : " << *ptr << endl;
    // cout << "Nilai Pointer 2 (0 bintang)    : " << ptr_2 << endl;
    // cout << "Nilai Pointer 2 (1 bintang)    : " << *ptr_2 << endl;
    // cout << "Nilai Pointer 2 (2 bintang)    : " << **ptr_2 << endl;
   
    //POINTER AS PARAMETER
    // int a = 10, b = 5;
    // cout << "Hasil dari fungsi biasa  : " << tambahBiasa(a,b) << endl;
    // cout << "Nilai A setelah penjumlahan -->" << a << endl << endl;
    // cout << "Hasil dari fungsi pointer : " << tambahPointer(&a,&b) << endl;
    // cout << "Nilai A setelah penjumlahan -->" << a << endl;

    //DYNAMIC POINTER
    int *ptr = new int;
    *ptr = 30;

    cout << "Isi variabel ptr: " << *ptr << " dan alamat variabel ptr: " << &ptr << " dan alamat yang ditunjuk pointer: " << ptr << endl;

    delete ptr; // deallocation
    cout << "Isi variabel ptr: " << *ptr << " dan alamat variabel ptr: " << &ptr << " dan alamat yang ditunjuk pointer: " << ptr << endl;

}