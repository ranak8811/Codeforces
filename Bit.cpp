#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    int c = 0;
    for (int i = 0; i < n; i++)
    {
        string x;
        cin >> x;
        if (x == "X++" || x == "++X") c++;
        else if (x == "X--" || x == "--X") c--;
    }
    cout << c << endl;
}