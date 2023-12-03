#include <fstream>
#include <iostream>

using namespace std;

int main() {
    ifstream inputFile;
    inputFile.open("input.txt");
    string line;
    int sum = 0;
    if (inputFile.is_open()) {
        while (inputFile.good()) {
            inputFile >> line;
            int last = -1;
            for (char c : line) {
                if (c >= '0' && c <= '9') {
                    if (last == -1) {
                        sum += 10 * ((int)c - '0');
                    }
                    last = ((int)c - '0');
                }
            }
            sum += last;
        }
    }
    cout << "sum: " << sum << endl;
}