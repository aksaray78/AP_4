#include <iostream>
using namespace std;

//fungsi tanpa nilai balikan
void pesan() {
    cout << "====== Welcome Genii O'Four ======" << endl;
}

//fungsi dengan nilai balikan
int tambah (int a, int b){
    return a + b;
}

int kali (int a, int b) {
    return a * b;
}

//fungsi overload
int kali (int a, int b, int c) {
    return a * b * c;
}

float kali(float a, float b) {
    return a * b;
}

//fungsi rekursif
// 5! = 5 x 4 x 3 x 2 x 1
long faktorial (int x) {
    if (x == 0 || x == 1) {
        return 1;
    } else {
        return x * faktorial(x - 1);
    }
}

int main() {
    system("cls");
    int x = 7, y = 3, z = 2;

    //fungsi void
    pesan();
    
    // fungsi dengan nilai balikan
    int hasilTambah = tambah(x, y);//supaya bisa dipakai nanti
    cout << "Hasil tambah = " << hasilTambah << endl;
    
    cout << tambah(x, y) << endl;

    //fungsi overload
    int hasilKali = kali(x, y);
    cout << "Hasil kali (int 2) = " << hasilKali << endl;
    
    int hasilKali3 = kali(x, y, z);
    cout << "Hasil kali (int 3) = " <<hasilKali3 << endl;

    float hasilKalifloat = kali(2.5f, 3.1f);//kalau gapake f nanti kebaca double
    cout << "Hasil kali pecahan = " << hasilKalifloat << endl;

    //fungsi rekursif
    int faktor = faktorial(x);
    cout << "Faktorial x = " << faktor << endl;
}