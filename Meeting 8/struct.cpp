#include <iostream>
#include <vector>
using namespace std;

struct alamat {
    string jalan;
    string kota;
};

struct mahasiswa {
    string nama;
    string nim;
    alamat al;//nested struct --> string jalan; string kota;
    int umur;
    float ipk;
};

int main() {
    system("cls");

    //objek -> mhs {string nama, string nim, alamat al, int umur, float ipk};

    mahasiswa mhs;//object mhs
    mhs.nama = "Aksa Prawira Sukma";
    mhs.nim = "251401080";
    mhs.umur = 19;
    mhs.ipk = 3.99;

    cout << "Nama   : " << mhs.nama << endl;
    cout << "NIM    : " << mhs.nim << endl;
    cout << "Umur   : " << mhs.umur << endl;
    cout << "IPK    : " << mhs.ipk << endl;

    cout << "\n";

    // Akses menggunakan pointer
    mahasiswa *ptrmhs = &mhs;
    cout << "Akses menggunakan pointer" << endl;
    cout << "Nama   : " << ptrmhs->nama << endl;
    cout << "NIM    : " << ptrmhs->nim << endl;
    cout << "Umur   : " << ptrmhs->umur << endl;
    cout << "IPK    : " << ptrmhs->ipk << endl;    

    cout << "\n";

    mahasiswa m2;

    cout << "Nama   : ";
    getline(cin,m2.nama);

    cout << "NIM    : ";
    getline(cin,m2.nim);

    cout << "Umur   : ";
    cin >> m2.umur;
    cin.ignore();

    cout << "IPK    : ";
    cin >> m2.ipk;
    cin.ignore();
    system("cls");

    // Menggunakan vector
    mahasiswa m3;

    vector<mahasiswa> mList;
    int n;
    cout << "Masukkan jumlah mahasiswa : "; 
    cin >> n;
    cin.ignore();

    cout << "Input data :" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Data Mahasiswa - " << i + 1 << endl;
        cout << "Nama   : "; getline(cin,m3.nama);
        cout << "NIM    : "; getline(cin,m3.nim);
        cout << "Jalan  : "; getline(cin,m3.al.jalan);
        cout << "Kota   : "; getline(cin,m3.al.kota);
        cout << "Umur   : "; cin >> m3.umur; cin.ignore();
        cout << "IPK    : "; cin >> m3.ipk; cin.ignore();
        cout << "\n";
        mList.push_back(m3);
    }

    // system("cls");
    cout << "Output :" << endl;
    for (int i=0; i < n; i++) {
        cout << "Data Mahasiswa - " << i + 1 << endl;
        cout << "Nama   : " << mList[i].nama << endl;
        cout << "NIM    : " << mList[i].nim << endl;
        cout << "Jalan  : " << mList[i].al. jalan << endl;
        cout << "Kota   : " << mList[i].al.kota << endl;
        cout << "Umur   : " << mList[i].umur << endl;
        cout << "IPK    : " << mList[i].ipk << endl;
    }
}