#include <iostream>
#include <string>
#include <vector>

int main() {
    std::string s, fs = "";
    std::getline(std::cin, s);

    for (char x : s) {
        char lowercase = std::tolower(x);
        if (lowercase != 'a' && lowercase != 'e' && lowercase != 'i' && lowercase != 'o' && lowercase != 'u' && lowercase != 'y') {
            fs += '.';
            fs += lowercase;
        }
    }

    std::cout << fs << std::endl;

    return 0;
}



// #include <iostream>
// #include <string>
// #include <vector>

// using namespace std;

// int main() {
//     string s, fs = "";
//     getline(cin, s);

//     vector<char> l;         // this code is giving ultapalta output(outputting question mark symbols)
//     for (char x : s) {
//         if (x == 'A' || x == 'E' || x == 'I' || x == 'O' || x == 'U' || x == 'Y' || 
//         x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u' || x == 'y') 
//         {
//             continue;
//         }
//         else fs += '.' + x;
//     }

//     cout << fs << endl;
// }