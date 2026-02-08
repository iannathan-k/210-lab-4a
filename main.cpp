#include <iostream>

using namespace std;

// COMSC-210 | Lab 4A | Ian Kusmiantoro

int main() {

    struct Color {
        int red;
        int green;
        int blue;
    };

    vector<Color> c_vector;

    Color c = {67, 420, 69};
    c_vector.push_back(c);

    cout << "red: " << c_vector.at(0).red << endl;
    cout << "green: " << c_vector.at(0).green << endl;
    cout << "blue: " << c_vector.at(0).blue << endl;

    return 0;
}