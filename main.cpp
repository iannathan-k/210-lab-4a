#include <iostream>
#include <iomanip>

using namespace std;

// COMSC-210 | Lab 4A | Ian Kusmiantoro

const int MIN = 25; // MIN and MAX values for RNG
const int MAX = 50;

int main() {
    srand(time(0)); // Set random seed to current time

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

    // Create headers, left aligned, 
    cout << setw(10) << "Color#";
    cout << setw(10) << "R value";
    cout << setw(10) << "G value";
    cout << setw(10) << "B value" << endl;
    cout << setw(10) << "------";
    cout << setw(10) << "-------";
    cout << setw(10) << "-------";
    cout << setw(10) << "-------" << endl;

    for (int i = 0; i < n; ++i) {
        cout << setw(10) << right << i;
        cout << setw(10) << right << c_vector.at(i).red;
        cout << setw(10) << right << c_vector.at(i).green;
        cout << setw(10) << right << c_vector.at(i).blue;
        cout << endl;
    }

    return 0;
}