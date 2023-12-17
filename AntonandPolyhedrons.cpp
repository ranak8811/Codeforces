#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    int n;
    cin >> n;

    map<string, int> data = {{"Tetrahedron", 4}, {"Cube", 6}, {"Octahedron", 8},
                            {"Dodecahedron", 12}, {"Icosahedron", 20}};

    int result = 0;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;

        if (data.find(s) != data.end()) {
            result += data[s];
        }
    }

    cout << result << endl;
}



// #include <iostream>
// #include <map>

// using namespace std;

// int main() {
//     map<string, int> d = {
//         {"ami", 1},
//         {"tmi", 2},
//         {"kai", 3},
//         {"pen", 4}
//     };
//     int c = 0;

//     for (const auto& pair : d) {
//         if (pair.first == "ami" || pair.first == "tmi" || 
//                 pair.first == "kai" || pair.first == "pen") {
//             c += pair.second;
//         }
//     }

//     cout << c << endl;

//     return 0;
// }
