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
            bool first = true;
            for (int i = 0; i < line.size(); i++) {
                if (line[i] >= '0' && line[i] <= '9') {
                    last = ((int)line[i] - '0');
                } else {
                    switch (line[i]) {
                        case 'o':
                            if (i < line.size() - 2) {
                                if (line[i + 1] == 'n' && line[i + 2] == 'e') {
                                    last = 1;
                                }
                            }
                            break;
                        case 't':
                            if (i < line.size() - 2) {
                                if (line[i + 1] == 'w' && line[i + 2] == 'o') {
                                    last = 2;
                                }
                            }
                            if (i < line.size() - 4) {
                                if (line[i + 1] == 'h' && line[i + 2] == 'r' && line[i + 3] == 'e' && line[i + 4] == 'e') {
                                    last = 3;
                                }
                            }
                            break;
                        case 'f':
                            if (i < line.size() - 3) {
                                if (line[i + 1] == 'o' && line[i + 2] == 'u' && line[i + 3] == 'r') {
                                    last = 4;
                                } else if (line[i + 1] == 'i' && line[i + 2] == 'v' && line[i + 3] == 'e') {
                                    last = 5;
                                }
                            }
                            break;
                        case 's':
                            if (i < line.size() - 2) {
                                if (line[i + 1] == 'i' && line[i + 2] == 'x') {
                                    last = 6;
                                }
                            }
                            if (i < line.size() - 4) {
                                if (line[i + 1] == 'e' && line[i + 2] == 'v' && line[i + 3] == 'e' && line[i + 4] == 'n') {
                                    last = 7;
                                }
                            }
                            break;
                        case 'e':
                            if (i < line.size() - 4) {
                                if (line[i + 1] == 'i' && line[i + 2] == 'g' && line[i + 3] == 'h' && line[i + 4] == 't') {
                                    last = 8;
                                }
                            }
                            break;
                        case 'n':
                            if (i < line.size() - 3) {
                                if (line[i + 1] == 'i' && line[i + 2] == 'n' && line[i + 3] == 'e') {
                                    last = 9;
                                }
                            }
                            break;
                    }
                }
                if (first && last != -1) {
                    sum += 10 * last;
                    first = false;
                }
            }
            sum += last;
        }
    }
    cout << "sum: " << sum << endl;
}