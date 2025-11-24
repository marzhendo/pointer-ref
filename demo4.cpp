#include <iostream>
#include <string> // Tambahkan include string

using namespace std;

class Cafe {
    public:
        string namaCafe;
        string menu;
        int harga;

        void tampilkanMenu() {
            cout << "Nama: " << namaCafe << endl;
            cout << "Menu: " << menu << endl;
            cout << "Harga: " << harga << endl;
        }

        void pilihMenu() {
            cout << "Pilih menu: ";
            // Menggunakan if-else karena menu adalah string
            if (menu == "1") {
                cout << "Anda memilih menu " << menu << endl;
            } else if (menu == "2") {
                cout << "Anda memilih menu " << menu << endl;
            } else if (menu == "3") {
                cout << "Anda memilih menu " << menu << endl;
            } else {
                cout << "Menu tidak tersedia atau logika belum sesuai" << endl;
            }
        }
}; // Tambahkan titik koma di sini

int main() {
    Cafe cafe1;
    cafe1.namaCafe = "Et Al.";
    cafe1.menu = "Espresso";
    cafe1.harga = 14000;

    cafe1.tampilkanMenu(); // Hapus argumen
    cafe1.pilihMenu();     // Perbaiki nama variabel
}