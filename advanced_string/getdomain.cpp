#include <iostream>
#include <fstream>
#include <math.h>
#include <string.h>
#include <stdio.h>
#include <map>

using namespace std;

int ntest;
char url[2222];
char domain[2222];

void input(){
    scanf("%s",&url);
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

void solve(){
    int startIdx = getIndexOfChar('/',url,2) + 1;
    int endIdx = getIndexOfChar('/',url,3) - 1;
    
    getSubString(domain,url,startIdx,endIdx);
    
    if ( domain[0] == 'w' && domain[1] == 'w' && domain[2] == 'w' && domain[3] == '.'){
        getSubString(domain,domain,4,strlen(domain));
    }
    
    printf("%s\n",domain);
}

void reset(){
    memset(domain,0,sizeof(domain));
    memset(url,0,sizeof(url));
}

int main(int argc, const char * argv[]) {
    freopen("domain.txt","r",stdin);
    
    scanf("%d",&ntest);
    
    for (int itest=0;itest<ntest;itest++){
        input();
        solve();
        reset();
    }
}
