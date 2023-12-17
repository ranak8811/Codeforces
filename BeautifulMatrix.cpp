#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<vector<int>> arr(5, vector<int>(5));
    int pp[2];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] == 1) {
                pp[0] = i;
                pp[1] = j;
            }
        }
        
    }
    // cout << pp[0] << " " << pp[1] << endl;

    int x = abs(pp[0] - 2);
    int y = abs(pp[1] - 2);

    cout << (x + y) << endl;
    
    // for (int i = 0; i < 5; i++)
    // {
    //     for (int j = 0; j < 5; j++)
    //     {
    //         cout << arr[i][j];
    //     }
        
    // }
    
}