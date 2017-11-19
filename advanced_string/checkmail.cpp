#include<iostream>
#include<string>
using namespace std;

int n;
string s;

int getPos(string s) {
    int count = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '@') {
            if (i == 0 || i == s.size() - 1) return 0;
            else count++;
        }
    }

    if (count >= 2 || count < 1) return 0;
    else {
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '@') return i;
        }
    }
}

bool checkValid(string s) {
    int pos = getPos(s);
    if (pos == 0) return false;
    for (int i = 0; i < pos; i++) {
        if (isalnum(s[i]) == 0) {
            if (s[i] != '_') return false;
        }
    }

    for (int i = pos + 1; i < s.size(); i++) {
        if (isalnum(s[i]) == 0) {
            if (s[i] != '.') return false;
        }
    }

    return true;
}

void input() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> s;
        if (checkValid(s)) cout << "1" << endl;
        else cout << "0" << endl;
    }
}


int main() {
    input();
    return 0;
}

