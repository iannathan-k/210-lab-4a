#include <iostream>

using namespace std;

// COMSC-210 | Lab 4A | Ian Kusmiantoro

int main() {

    struct Color {
        int red;
        int green;
        int blue;
    };

    Color c = {67, 420, 69};

    cout << "red: " << c.red << endl;
    cout << "green: " << c.green << endl;
    cout << "blue: " << c.blue << endl;

    return 0;
}