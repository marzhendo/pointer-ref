#include <iostream>

using namespace std;

int main() {
    string nba1 = "Stephen Curry";
    string& ref1 = nba1;

    cout << "Value nba1 = " << nba1 << endl;
    cout << "Value ref1 = " << ref1 << endl;
    cout << "Alamat memori nba1 = " << &nba1 << endl;
    cout << "Alamat memori ref1 = " << &ref1 << endl;
    cout << "================\n";

    ref1 = "Cheff Curry";
    cout << "Value nba1 = " << nba1 << endl;
    cout << "Value ref1 = " << ref1 << endl;
    cout << "Alamat memori nba1 = " << &nba1 << endl;
    cout << "Alamat memori ref1 = " << &ref1 << endl;
    cout << "================\n";
}