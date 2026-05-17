#include <iostream>
using namespace std;

class ContohAkses {
    // int n;//secara default semua dalam class itu private
    private://bisa dipake bisa nggak, best practice iya
        int privateVar;

    protected://class sendiri dan class turunan
        int protectedVar;

    public://untuk semua function
        int publicVar;

    // Constructor adalah penetap nilai awal dari sebuah class
    ContohAkses() {//jadi gak perlu int aoynima = 0;
        privateVar = 1;
        protectedVar = 2;
        publicVar = 3;
    }//bisa aja isi constructor itu kayak function pada biasa

    // //Constructor berparameter
    // ContohAkses(int x) {
    //     privateVar = x;
    //     protectedVar = 2;
    //     publicVar = 3;
    // }

    //constructor ga bole nimpa jadi satu aja

    void tampilkanSemua() {
        cout << "Akses dari dalam class : " << endl;
        cout << privateVar << endl;
        cout << protectedVar << endl;
        cout << publicVar << endl;
    }
};

class Turunan : public ContohAkses {
    public:
        void aksesProtected() {
            cout << "Akses dari dalam class turunan : " << endl;
            // cout << privateVar << endl;//error karena private
            cout << protectedVar << endl;
            cout << publicVar << endl;      
        }
};

//class turunan bisa diturunkan lagi

int main() {
    system("cls");

    ContohAkses obj;
    // ContohAkses obj(10);//kalau class minta parameter
    obj.tampilkanSemua();

    cout << "Akses dari luar class : " << endl;
    cout << obj.publicVar << endl;
    // cout << obj.protectedVar << endl;//error karena protected
    // cout << obj.privateVar << endl;//error karena private

    Turunan tur;
    tur.aksesProtected();
    system("pause");
}