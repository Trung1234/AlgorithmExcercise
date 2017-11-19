#include <iostream>
#include <fstream>
#include <math.h>
#include <string.h>
#include <stdio.h>

using namespace std;

int len;
char s1[111],s2[111];
int dem[256];
int ntest;
int k;
void input(){
    gets(s1);
    gets(s2);
    
}

void solve(){
    if(strlen(s1) > strlen(s2)){//xau 1 lon hon xau 2 -> khong can xet nua
	cout << "Khong co xau 1 trong xau 2";

}
else{//bat dau duyet. so sanh s1[0] voi s2[i]
	for(int i = 0; i < strlen(s2); i++){
		
		if(s1[k] == s2[i]){//neu s1[0] == s2[i] duyet toi ki tu tiep theo
			if(k = strlen(s1)){//duyet het xau 1
				cout << "Xau 1 xuat hien trong xau 2" << endl;
				system ("pause");
			
			}
			k++;
		}
		else k = 0;
	}
}
//het xau 2
if(k == 0){
	cout << "Khong co xau 1 trong xau 2";
	system ("pause");
	
}
}

int main(int argc, const char * argv[]) {
//    freopen("input.txt","r",stdin);
    
    
        input();
        solve();
    
    
}
