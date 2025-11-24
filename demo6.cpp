#include <iostream>
#include <string>
using namespace std;

int main() {
    string a1 = "Asep";
    string *ptr = &a1;

    cout << "Value a1 = " << a1 << endl;
    cout << "Alamat memori a1 = " << &a1 << endl;
    cout << "Value pointer = " << *ptr << endl;
    cout << "Alamat memori pointer = " << ptr << endl;

    //ubah value a1 lewat pointer
    *ptr = "Budi";
    cout << "Value a1 setelah diubah = " << a1 << endl;
    cout << endl;
    cout << "===================\n";
    //buat variabel baru lalu tunjuk
    string a2 = "Caca";
    ptr = &a2;
    cout << "Value a2 = " << a2 << endl;
    cout << "Alamat memori a2 = " << &a2 << endl;
    cout << "Value pointer = " << *ptr << endl;
    cout << "Alamat memori pointer = " << ptr << endl;
}