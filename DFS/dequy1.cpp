#include <iostream>
#include <fstream>
#include <math.h>
#include <string.h>
#include <stdio.h>
#include <algorithm>
#include <vector>

using namespace std;

int nlang,goc;
int s[1111][1111];
int visi
void input(){
    scanf("%d %d",&nlang,&goc);
    
    for (int i=1;i<=nlang;i++){
        for (int j=1;j<=nlang;j++){
            scanf("%d",&s[i][j]);
            // neu 2 lang i,j noi truc tiep thi s[i][j] = 1
        }
    }
}

void dequy(int idx){
    visited[idx] = 1
    
}

void solve(){
    dequy(goc);
}

int main(int argc, const char * argv[]) {
    freopen("input.txt","r",stdin);
    
    int ntest;
    
    scanf("%d",&ntest);
    
    for (int itest=0;itest<ntest;itest++){
        input();
        solve();
    }
}
