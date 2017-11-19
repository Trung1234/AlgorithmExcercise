#include<iostream>
using namespace std;

int n;
int a[100][100];

int main() {
    cin >> n;
    int x = n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i + j == n - 1 || i==j)  cout << x;
            else cout <<" ";
        }
        cout << "\n";
        x--;
    }
    return 0;
}


