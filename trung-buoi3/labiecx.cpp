#include<iostream>
using namespace std;

int n;
int a[100][100];

int main() {
    cin >> n;
    int spaces = n - 2;
    for (int i = 0; i < n/2; i++) {
        for (int j = 0; j < n; j++) {
            if (j<(n - spaces) / 2 || j>=(n-spaces)/2+spaces) cout << "*"; //do?n n�y l� l?y c�c v? tr� d?u v� cu?i sau khi b? di c�i kho?ng tr?ng ? gi?a
            else cout<<" ";
        }

        cout << "\n";
        spaces -= 2;
    }
    
    for (int i = 0; i < n; i++) {
        cout << "*";
    }
    cout << "\n";

    spaces = 1;
    for (int i = n/2+1; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j<(n - spaces) / 2 || j>=(n-spaces)/2+spaces) cout << "*";
            else cout<<" ";
        }
        cout << "\n";
        spaces += 2;
    }
    return 0;
}


//j<(n - spaces) / 2 t?c l� l?y c�c di?m ? d?u b? di kho?ng tr?ng, gi? s? n=7 th� m?ng l� 0 1 2 3 4 5 6
// spaces = n - 2 = 5
// (n-spaces)/2 = 1
// v?y th� m�nh ch? in d?u * v�o v? tr� 0 th�i
// tuong t? v?i (n-spaces)/2+spaces = (7-5)/2 + 5 = 6;
// v?y th� m�nh ch? in d?u * v�o v? tr� s? 6 th�i
// spaces ti?p t?c gi?m v� m�nh ti?p t?c c�ng th?c nhu v�y

