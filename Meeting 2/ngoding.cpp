#include <iostream>
using namespace std;

int main() {
    system("cls");

    int a;
    int b;

    //assignment operator
    a = 5;
    b = 7;

    //aritmethic operator (+,-,*,/,%)
    int tambah = a+b;
    int kurang = a-b;
    int kali = a*b;
    int bagi = a/b;
    float bagi2 = float(a)/float(b);  
    // //casting variable a sebagai float, bisa yang a aja atau yang b aja atau keduanya
    int mod = a%b; 
    // //misalnya 5 mod 7 maka hasil modnya adalah yang lebih kecil

    cout << "Hasil tambah: " << tambah << endl;
    cout << "Hasil kurang: " << kurang << endl;
    cout << "Hasil kali: " << kali << endl;
    cout << "Hasil bagi (bulat): " << bagi << endl;
    cout << "Hasil bagi (pecahan): " << bagi2 << endl;
    cout << "Hasil modulo: " << mod << endl;

    //relational operator
    //membandingkan kedua nilai dengan operator ==, >, >=, <, <=, !=
    // jika benar akan memberikan output 1 dan 0 jika salah
    //7<x<20 maka [7+1...20-1]

    cout << (a==b) << endl;
    cout << (a>b) << endl;
    cout << (a>=b) << endl;
    cout << (a<b) << endl;
    cout << (a<=b) << endl;
    cout << (a!=b) << endl;

    //logical operator 
    //and (&&) kalau & itu bitwise jadinya
    cout << (true && true) << endl;
    cout << (true && false) << endl;
    cout << (false && true) << endl;
    cout << (false && false) << endl;

    // //or (||)
    cout << (true || true) << endl;
    cout << (true || false) << endl;
    cout << (false || true) << endl;
    cout << (false || false) << endl;

    // //negasi (!)
    cout << !true << endl;
    cout << !false << endl;

    // //bitwise operator (!, &, |, ~, ^)
    cout << (5&7) << endl;
    cout << (5|7) << endl;
    cout << (5^7) << endl;//xor
    cout << (~7) << endl;//~1204 maka jadinya -1025
    cout << (7 << 2) << endl;
    cout << (7 >> 2) << endl;

    //shorthand
    a += 2; // a = a + 2 =7 
    cout << a << endl;

    a -= 2;
    cout << a << endl;

    a *= 2;
    cout << a << endl;

    a /= 2;
    cout << a << endl;
    
   //increment and decrement
   // pre increment
   cout << a << endl;
   cout << ++a << endl;
   cout << a << endl;
   cout << endl;

   // pre decrement
   cout << a << endl;
   cout << --a << endl;
   cout << a << endl;
   cout << endl;

   // post increment
   cout << a << endl;
   cout << a++ << endl;
   cout << a << endl;
   cout << endl;

   // post decrement
   cout << a << endl;
   cout << a-- << endl;
   cout << a << endl;
   cout << endl;
}