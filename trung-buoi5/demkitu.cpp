#include <iostream>
#include <fstream>
#include <math.h>
#include <string.h>
#include <stdio.h>

using namespace std;

int len;
char ch[111];
int dem[256];
int ntest;

void input(){
    gets(ch);
    len = strlen(ch);
}

void solve(){
    memset(dem,0,sizeof(dem));
    
    for (int i=0;i<len;i++)
        dem[ ch[i] ]++;
    
    for (int i=0;i<256;i++)
        if ( dem[i] > 0 )
            printf("%c co %d lan xuat hien\n",i,dem[i]);
}

int main(int argc, const char * argv[]) {
//    freopen("input.txt","r",stdin);
    
    scanf("%d\n",&ntest);
    
    for (int itest=0;itest<ntest;itest++){
        input();
        solve();
    }
    
}
