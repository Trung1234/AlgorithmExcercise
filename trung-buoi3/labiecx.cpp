#include<iostream>
using namespace std;

int n;
int a[100][100];

int main() {
    cin >> n;
    int spaces = n - 2;
    for (int i = 0; i < n/2; i++) {
        for (int j = 0; j < n; j++) {
            if (j<(n - spaces) / 2 || j>=(n-spaces)/2+spaces) cout << "*"; //do?n này là l?y các v? trí d?u và cu?i sau khi b? di cái kho?ng tr?ng ? gi?a
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


//j<(n - spaces) / 2 t?c là l?y các di?m ? d?u b? di kho?ng tr?ng, gi? s? n=7 thì m?ng là 0 1 2 3 4 5 6
// spaces = n - 2 = 5
// (n-spaces)/2 = 1
// v?y thì mình ch? in d?u * vào v? trí 0 thôi
// tuong t? v?i (n-spaces)/2+spaces = (7-5)/2 + 5 = 6;
// v?y thì mình ch? in d?u * vào v? trí s? 6 thôi
// spaces ti?p t?c gi?m và mình ti?p t?c công th?c nhu vây

