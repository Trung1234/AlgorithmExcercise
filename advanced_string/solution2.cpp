#include <iostream>
#include <string>
#include <fstream>

using namespace std;

string domain(string url) {
    int index1 = url.find("//") + 2; // vi tri chu cai dau tien trong domain = vi tri cua "//" + 2
    int index2 = url.find("/",index1);
    string result = url.substr(index1,index2-index1);
    return result;
}

int main() {
//	freopen("domain.txt","r",stdin);
    int n ;
    cin >> n;
//    cin.ignore();
    string url;

    while(n > 0) {
        getline(cin,url);
        cout << domain(url) << endl ;
        n -- ;
    }


}
