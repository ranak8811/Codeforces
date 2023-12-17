// #include <iostream>
// #include <vector>
// #include <string>
// using namespace std;

// int main() {
//     string a;
//     cin >> a;

//     vector<string> l; // Create a vector of strings to store the characters

//     for (int i = 0; i < a.length(); i += 2) {
//         l.push_back(a.substr(i, 1)); // Add the character at index i to the vector
//     }

//     for (int i = 0; i < l.size(); i++) {
//         cout << l[i] << " " << endl; // Print each character in the vector
//     }

//     return 0;
// }



#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main() {
    string a;
    cin >> a;

    vector<string> l;
    for (int i = 0; i < a.length(); i += 2)
    {
        l.push_back(a.substr(i, 1));
    }
    
    sort(l.begin(), l.end());
    for (int i = 0; i < l.size(); i ++)
    {
        if (i == l.size() - 1) cout << l[i] << endl;
        else cout << l[i] << "+";
        
    }


}