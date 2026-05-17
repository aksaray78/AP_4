#include <iostream>
using namespace std;

class Student {
    public:
        string name;
        Student(string n) { 
            name = n; 
        }
};

int main() {
    system("cls");
    string inputName = "Aksa";
    Student n(inputName);
    cout << "Nama: " << n.name << endl;
}
