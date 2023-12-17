// #include <iostream>

// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     if (n % 2 == 0) {
//         cout << "4" << " " << n-4;
//     }
//     else {
//         cout << "9" << " " << n-9;
//     }
// }


#include <iostream>

bool isComposite(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return true;
    }
    return false;
}

int main() {
    int n;
    std::cin >> n;

    for (int i = 4; i <= n / 2; i++) {
        if (isComposite(i) && isComposite(n - i)) {
            std::cout << i << " " << n - i << std::endl;
            break;
        }
    }

    return 0;
}
