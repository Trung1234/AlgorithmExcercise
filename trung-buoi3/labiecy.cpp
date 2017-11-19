#include<iostream>
using namespace std;

int n;

int main() {
    cin >> n;
    for (int i = 0; i < n/2+1; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j || i + j == n - 1 || j == 0 || j == n - 1) cout << "*";
            else cout << " ";
        }
        cout << "\n";
    }
    for (int i = n / 2 + 1; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j == 0 || j == n - 1) cout << "*";
            else cout << " ";
        }
        cout << "\n";
    }
    return 0;
}

