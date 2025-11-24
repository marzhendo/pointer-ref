#include <iostream>
#include <string>
using namespace std;

int main() {
    int a = 42;
    float b = 3.14;
    string c = "Hello, World!";
    char d = 'X';

    cout << "address of a: " << &a << endl;
    cout << "address of b: " << &b << endl;
    cout << "address of c: " << &c << endl;
    cout << "address of d: " << &d << endl;
}