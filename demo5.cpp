#include <iostream>
#include <string>
using namespace std;

int main() {
    int a = 420;
    int b = 10;
    int* ptr = &a;

    cout << "Value nilai a = " << a << endl;
    cout << "Alamat memori a = " << &a << endl;
    cout << "Value  pointer = " << *ptr << endl;
    cout << "Alamat memori pointer = " << ptr << endl;

    //ubah value a lewat pointer
    *ptr = 200;
    cout << "Value nilai a = " << *ptr << endl;

    //tunjuk b
    ptr = &b;
    cout << "Value nilai b = " << *ptr << endl;
    cout << "Alamat memori pointer baru = " << ptr << endl;
}
