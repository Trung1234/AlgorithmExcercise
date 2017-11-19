#include <iostream>
#include <fstream>
#include <math.h>
#include <string.h>
#include <stdio.h>
#include <map>

using namespace std;

int ntest;
char s[11111];
char sub[1111];

void input(){
    scanf("%s",&s);
}

void getSubString(char sub[],char string[],int bd,int kt){
    int idx = 0;
    
    for (int i=bd;i<=kt;i++){
        sub[idx] = string[i];
        idx++;
    }
}

int getIndexOfChar(char c,char s[],int num){
    int dem = 0;
    int len = strlen(s);
    
    for (int i=0;i<len;i++){
        if ( s[i] == c ){
            dem++;
            if ( dem == num )
                return i;
        }
    }
    
    return -1;
}

int isValidCharacter(char c){
    if ( c >= 'a' && c <= 'z' )
        return 1;
    if ( c >= 'A' && c <= 'Z' )
        return 1;
    if ( c >= '0' && c <= '9' )
        return 1;
    if ( c == '.' || c == '_' )
        return 1;
    return 0;
}

int checkValidEmail(char s[]){
    int len = strlen(s);
    
    int idx = getIndexOfChar('@', s, 2);
    if ( idx != -1)     // co hon 1 dau @
        return 0;
    
    idx = getIndexOfChar('@', s, 1);
    if ( idx == -1 )    // ko co dau @
        return 0;
    
    getSubString(sub, s, idx+1, len);   // lay phan domain
    idx = getIndexOfChar('.', sub, 1);  // kiem tra phan domain co it nhat 1 dau cham
    
    if ( idx == -1 )
        return 0;       // ko co dau cham thi ko hop le
    
    // kiem tra ki tu hop le
    len = strlen(sub);
    for (int i=0;i<len;i++)
        if ( !isValidCharacter(sub[i]) )
            return 0;
    
    return 1;
}

void solve(){
    printf("%d\n",checkValidEmail(s));
}

int main(int argc, const char * argv[]) {
    freopen("input.txt","r",stdin);
    
    scanf("%d",&ntest);
    
    for (int itest=0;itest<ntest;itest++){
        input();
        solve();
    }
}
