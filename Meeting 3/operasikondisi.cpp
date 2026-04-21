#include <iostream>
using namespace std;

int main() {
    system("cls");

    int x;
    cout << "Masukkan nilai: "; 
    cin >> x;

    //if statement
    /*if (kondisi) { //best practice kondisinya dalam kurung
        Statement 1;
        Statemnet 2;
        .....
        Statement N;
    }*/

//    if (x > 75) { ctrl + /
//         cout << "Anda Lulus" << endl;
//    }

    //if else statement
    // if (x > 75) { ctrl + /
    //     cout << "Anda Lulus" << endl;
    // } else {
    //     cout << "Anda tidak Lulus" << endl;
    // }

    // string lampu;
    // cout << "Kondisi: "; //getline untuk bisa spasi
    // getline(cin, lampu);

    // if (lampu == "Hijau") {
    //     cout << "Silahkan jalan" << endl;
    // }  else if (lampu == "Kuning") {
    //     cout << "Berhati-hati" << endl;
    // }  else if (lampu == "Merah") {
    //     cout << "Berhenti" << endl;
    // }  else {
    //     cout << "Nilai Invalid!" << endl;
    //     return 0; //nol itu kan false jadi berarti else nya me return 0 untuk menyatakan pernyataan tidak sesuai program
    // }

    //Nested if statement
    // if (x > 75) {
    //     cout << "Anda lulus" << endl;
    //     if (x == 100) {
    //         cout << "Nilai Anda sempurna" << endl;
    //     }
    // } else {
    //     cout << "Anda tidak lulus" << endl;
    // }

    // Switch case statement
    // switch (x) {
    //     case 1:
    //         cout << "Senin" << endl;
    //         break;
    //     case 2:
    //         cout << "Selasa" << endl;
    //         break;
    //     case 3:
    //         cout << "Rabu" << endl;
    //         break;
    //     case 4:
    //         cout << "Kamis" << endl;
    //         break;
    //     case 5:
    //         cout << "Jum'at" << endl;
    //         break;
    //     default:
    //         cout << "Libur" << endl;
    //         break;
    // }

    // Switch range
    // switch (x) {
    //     case 85 ... 100: cout << "A" << endl; break;
    //     case 80 ... 84: cout << "B" << endl; break;
    //     case 70 ... 79: cout << "C" << endl; break;
    //     case 20 ... 69: cout << "D" << endl; break;
    //     case 0 ... 19: cout << "E" << endl; break;
    //     default : cout << "Nilai Invalid!" << endl; break; //else di pascal
    // }

    // ternary operator
    string cek = (x % 2 == 0) ? "Genap" : "Ganjil";
    cout << x << " itu adalah bilangan " << cek << endl;

}
