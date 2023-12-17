#include <iostream>
#include <fstream>
#include <string>

using namespace std;

bool check_strings(string a, string b) {
    for (int i = 0; i < (int)a.size() - 1; i++) {
        if ((a[i] == '0' && b[i] == '0') && (a[i + 1] == '1' && b[i + 1] == '1')) {
            return true;
        }
    }
    return false;
}

int main() {
    ifstream inputFile("input1861b.txt");
    ofstream outputFile("output1861b.txt");

    string a, b;
    int t;

    if (!inputFile.is_open()) {
        cout << "Failed to open input.txt" << endl;
        return 1;
    }

    if (!outputFile.is_open()) {
        cout << "Failed to open output.txt" << endl;
        return 1;
    }

    inputFile >> t;

    for (int i = 0; i < t; i++) {
        inputFile >> a >> b;
        if (check_strings(a, b)) {
            outputFile << "YES" << endl;
        } else {
            outputFile << "NO" << endl;
        }
    }

    inputFile.close();
    outputFile.close();

    return 0;
}
