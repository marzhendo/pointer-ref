#include <iostream>
#include <string>
using namespace std;

int main() {
    int nilai = 200;
    int *pNilai = &nilai;

    cout << "Value nilai: " << nilai << endl;
    cout << "Alamat nilai: " << &nilai << endl;
    cout << "Value pointer: " << *pNilai << endl;
    cout << "Alamat pointer: " << pNilai << endl;
}