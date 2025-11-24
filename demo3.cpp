#include <iostream>
#include <string>
using namespace std;

// void greet(const string* name) {
//     if (name != nullptr) {
//         cout << "Hello, " << *name << "!\n";
//     } else {
//         cout << "Hello, guest!\n";
//     }
// }

void reviewAction(const string& name, const string* extraComment) {
    if (extraComment != nullptr) {
        cout << "Thanks for the review, " << name << "! The team will get back to you if you had any questions.\n";
    } else {
        cout << "Thanks for the review, " << name << "!\n";

    }
}

int main()
{
    string comment = "Its, Delicious";

    reviewAction("Alice", &comment);

    return 0;
}