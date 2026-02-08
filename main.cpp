#include <iostream>

using namespace std;

// COMSC-210 | Lab 4A | Ian Kusmiantoro

const int MIN = 25; // MIN and MAX values for RNG
const int MAX = 50;

int main() {

    struct Color {
        int red;
        int green;
        int blue;
    };

    vector<Color> c_vector;

    // Generates random numbers in range [25, 50]
    int n = rand() % (MAX - MIN + 1) + MIN;

    // Iterate n times, pushing to c_vector new temp colors each time
    for (int i = 0; i < n; ++i) {
        Color c;
        
        c.red = rand() % 256; // Modulo 256 as colors are in range [0, 255]
        c.green = rand() % 256;
        c.blue = rand() % 256;

        c_vector.push_back(c);
    }

    // Print colors to verify 
    for (const auto& c : c_vector) {
        cout << "Red: " << c.red << endl;
        cout << "Green: " << c.green << endl;
        cout << "Blue: " << c.blue << endl;
    }

    return 0;
}