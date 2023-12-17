#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<vector<int>> c(n, vector<int>(3));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> c[i][j];
        }
        
    }
    
    int x = 0, y = 0, z = 0;
    for (int i = 0; i < n; i++)
    {
        x += c[i][0];
        y += c[i][1];
        z += c[i][2];
    }
    
    if (x == 0 && y == 0 && z == 0) cout << "YES" << endl;
    else cout << "NO" << endl;
}