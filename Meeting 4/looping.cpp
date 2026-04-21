#include <iostream>
using namespace std;

/*goto, while, do-while, for*/

/*.while. dia cek kondisi dulu baru run
kalau .do while. run dulu baru cek sebelum ulang*/
int main() {    
    system("cls");

    // goto A;
    // B:
    // cout << "adalah ";
    // goto C;
    // E:
    // cout << "Komputer ";
    // goto F;
    // C:
    // cout << "anak ";
    // goto D;
    // A:
    // cout << "Aku ";
    // goto B;
    // F:
    // cout << "USU. ";
    // goto selesai;
    // D:
    // cout << "Ilmu ";
    // goto E;
    // selesai:
    // cout << endl;


    // int i = 40;

    // lipat:
    // if (i%5 == 0) {
    //     cout << i << " ";
    // }
    // i--;

    // if (i >= 5) {
    //     goto lipat;
    // }
    // cout << endl;


    //while
    // int i = 10;
    // cout << "\nini While\n";
    // while (i >= 1) {
    //     cout << i << ". Lorem" << endl;
    //     i--;
    // }


    //do while
    // int i = 10;
    // cout << "\nini Do While\n";
    // do {
    //     cout << i << ". Lorem" << endl;
    // } while (i > 10);
    // cout << endl;

    //   int i = 10;
    // string ulang;
    // cout << "\nini Do While\n";
    // do {
    //     cout << i << ". Lorem" << endl;
    //     cout << "Mau ulang? ";
    //     cin >> ulang;
    // } while (ulang == "ulang");
    // cout << endl;


    //for loop, cocok dipakai kalau sudah mengetahui batas perulangan
    //for (inisialisasi, kondisi, increment/decrement)
    // for (int i =1/*kondisional*/; i <= 5; i++) { //kalau misalnya ++i atau pre increment maka jadi 6
    //     cout << "Hidup Jokowi!\n";
    // }
    // cout << endl;


    //atribut length()
    string kata;
    cout << "Masukkan kata: ";
    cin >> kata;
    for (int i = 0; i < kata.length(); i++) {
        cout << i+1 << ". " << kata[i] << endl;
    }


    //nested for
    // for (int i = 1; i <= 7; i++) {
    //     for (int j = 1; j <= i; j++) {
    //         cout << "* ";
    //     }
    // cout << endl;
    // }



}