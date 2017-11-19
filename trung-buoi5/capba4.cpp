#include <iostream>
#include <fstream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

using namespace std;

char str[111111];
char kq[111111];
char a[111111],b[111111];

void input(){
    scanf("%s %s %s",&str,&a,&b);
}

void getSubString(char sub[],char string[],int bd,int kt){
    int idx = 0;
    memset(sub,0,sizeof(sub));
    
    for (int i=bd;i<=kt;i++){
        sub[idx] = string[i];
        idx++;
    }
}

void addCharacter(char str[],char c){
    int len = strlen(str);
    str[len] = c;
}

void solve(){
    int len = strlen(str);
    int lena = strlen(a);
    char sub[11111];
    
    for (int i=0;i<len;i++){
        // kiem tra ki tu dau
        if ( str[i] != a[0] ){
            addCharacter(kq,str[i]);
            continue;
        }
        
        // kiem tra pham vi substring co bi vuot gioi han ko
        if ( i+lena-1 >= len ){
            addCharacter(kq,str[i]);
            continue;
        }
        
        // lay sub string
        getSubString(sub,str,i,i+lena-1);
        
        // kiem tra 2 string bang nhau
        if ( strcmp(sub,a) != 0 ){
            // khac nhau day ne
            addCharacter(kq,str[i]);
            continue;
        }
        
        // day moi la truong hop giong nhau
        // noi chuoi b vao chuoi ket qua
        strcat(kq,b);
        // chuyen con tro toi phan ngoai substring
        i = i+strlen(a)-1;
    }
    
    printf("%s\n",kq);
}

void reset(){
    memset(a,0,sizeof(a));
    memset(b,0,sizeof(b));
    memset(str,0,sizeof(str));
    memset(kq,0,sizeof(kq));
}

int main()
{
    freopen("queue.txt","r",stdin);
    
    int ntest;
    scanf("%d",&ntest);
    
    for (int itest=0;itest<ntest;itest++){
        input();
        solve();
        reset();
    }
    
    return 0;
}
