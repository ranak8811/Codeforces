#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    int n;
    cin >> n;

    map<string, int> d;

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;

        if (d.find(s) != d.end()) {
            cout << s << to_string(d[s]) << endl;
            d[s]++;
        } else {
            cout << "OK" << endl;
            d[s] = 1;
        }
    }

    return 0;
}




// #include <iostream>          //it fails on test case 7
// #include <vector>
// #include <string>

// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     vector<string> gs(n);
//     for (int i = 0; i < n; i++) {
//         cin >> gs[i];
//     }

//     vector<string> ds;
//     for (const string& s : gs) {
//         if (find(ds.begin(), ds.end(), s) != ds.end()) {
//             // The name already exists, generate a new name
//             int i = 1;
//             while (true) {
//                 string new_name = s + to_string(i);
//                 if (find(ds.begin(), ds.end(), new_name) == ds.end()) {
//                     ds.push_back(new_name);
//                     cout << new_name << endl;
//                     break;
//                 }
//                 i++;
//             }
//         } else {
//             // Name is unique, add it to the database
//             ds.push_back(s);
//             cout << "OK" << endl;
//         }
//     }

//     return 0;
// }
