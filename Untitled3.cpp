#include <iostream>
#include <fstream>
#include <math.h>
#include <string.h>
#include <stdio.h>

using namespace std;

int nhang,ncot;
int a[111][111];
int ntest;

void input(){
    scanf("%d %d",&nhang,&ncot);
    
    for (int i=0;i<nhang;i++)
        for (int j=0;j<ncot;j++)
            scanf("%d",&a[i][j]);
}

void solve(){
    for (int i=0;i<nhang;i++){
        for (int j=0;j<ncot;j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }
    
}

int main(int argc, const char * argv[]) {
    
    input();
    solve();
    
    

