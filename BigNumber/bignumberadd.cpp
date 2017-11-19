#include <iostream>
#include <fstream>
#include <math.h>
#include <string.h>
#include <stdio.h>

using namespace std;

char a[111111],b[111111];
char kq[111111];
int ntest;

void input(){
    scanf("%s %s",&a,&b);
}

void daochuoi(char s[]){
    int len = strlen(s);
    
    for (int i=0;i<len/2;i++)
        swap(s[i],s[len-i-1]);
}

void themSo0(char s[],int num){
    int len = strlen(s);
    
    for (int i=len;i<len+num;i++){
        s[i] = '0';
    }
}

int max(int a,int b){
    if (a>b)
        return a;
    return b;
}

void convertCharToInt(char s[]){
    int len = strlen(s);
    for (int i=0;i<len;i++)
        s[i] = s[i] - '0';
}

void outputArray(char s[]){
    int len = strlen(s);
    for (int i=0;i<len;i++)
        printf("%d",s[i]);
    printf("\n");
}

void clean0(char s[]){
    int len = strlen(s);
    
    for (int i=len-1;i>0;i--){
        if ( s[i] == '0' ) // s[i0 == '\0'
            s[i] = 0;
        else
            return;
    }
}

void solve(){
    daochuoi(a);
    daochuoi(b);
    
    int len1 = strlen(a);
    int len2 = strlen(b);
    
    if ( len1 > len2 ){
        themSo0(b,len1-len2);
    }
    
    if ( len2 > len1 ){
        themSo0(a,len2-len1);
    }

    int len = max(len1,len2);
    int nho = 0;
    for (int i=0;i<len;i++){
        kq[i] = (a[i]-'0') + (b[i]-'0') + nho;    // cong so
        // doi chuoi thanh so
        nho = kq[i] / 10;       // lay nho
        kq[i] = kq[i] % 10;     // lay ket qua
        
        kq[i] = kq[i] + '0';    // bien so thanh chu
    }
    
    if ( nho > 0 ){
        kq[len] = '1';
    }
    
    clean0(kq);
    daochuoi(kq);
    
    printf("%s\n",kq);
}

void reset(){
    memset(a,0,sizeof(a));
    memset(b,0,sizeof(b));
    memset(kq,0,sizeof(kq));
}

int main(int argc, const char * argv[]) {
    freopen("input.txt","r",stdin);
    
    scanf("%d\n",&ntest);
    
    for (int itest=0;itest<ntest;itest++){
        input();
        solve();
        reset();
    }
    
}
