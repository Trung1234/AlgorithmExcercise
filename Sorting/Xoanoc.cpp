#include <iostream>
#include <fstream>
#include <math.h>
#include <string.h>
#include <stdio.h>
#include <algorithm>

using namespace std;
int n;
int a[1111];

void input(){
    scanf("%d",&n);
    
    for (int i=0;i<n;i++)
        scanf("%d",&a[i]);
}
void solve(){
	Xoanoc
}
void output(){
    for (int i=0;i<n;i++)
        printf("%d ",a[i]);
    printf("\n");
}

int main(int argc, const char * argv[]) {
    freopen("input.txt","r",stdin);
    
    int ntest;
    
    scanf("%d",&ntest);
    
    for (int itest=0;itest<ntest;itest++){
        input();
        solve();
        output();
    }
}
