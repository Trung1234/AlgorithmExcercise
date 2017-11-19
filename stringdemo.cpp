#include <iostream>
#include <fstream>
#include <math.h>
#include <string.h>
#include <stdio.h>

using namespace std;


int main(int argc, const char * argv[]) {
    //freopen("input.txt","r",stdin);
    
    char ch[111];
    int n;
    scanf("%d\n",&n);       // nho \n de tranh loi nhap dong
    
    for (int i=0;i<n;i++){
        //scanf("%s",&ch);  // nhap tu
        gets(ch);           // nhap dong
        
        // in cach 1
        //printf("%s\n",ch);
        
        // in cach 2
        int len = strlen(ch);
        for (int i=0;i<len;i++)
            printf("%c",ch[i]);
        printf("\n");
    }
}
