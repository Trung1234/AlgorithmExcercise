#include <iostream>
#include <fstream>
#include <math.h>
#include <string.h>
#include <stdio.h>
#include <algorithm>

using namespace std;

struct boso{
    int so1;
    int so2;
    int so3;
};

boso s[1111];
int n;

void input(){
    scanf("%d",&n);
    
    for (int i=0;i<n;i++){
        scanf("%d %d %d",&s[i].so1,&s[i].so2,&s[i].so3);
    }
}

void output(){
    for (int i=0;i<n;i++){
        printf("%d %d %d\n",s[i].so1,s[i].so2,s[i].so3);
    }
    printf("\n");
}

bool cmp(boso b1,boso b2){
    // kiem tra so nguyen dau tien
    if (b1.so1 < b2.so1)
        return 1;
    if (b1.so1 > b2.so1)
        return 0;
    
    // so nguyen dau tien bang nhau
    // so sanh so nguyen so 2
    if (b1.so2 < b2.so2)
        return 1;
    if (b1.so2 > b2.so2)
        return 0;
    
    // 2 so nguyen dau tien bang nhau
    // so sanh so nguyen so 3
    if (b1.so3 < b2.so3)
        return 1;
    if (b1.so3 > b2.so3)
        return 0;
    
    // 3 cap bang nhau tat
    return 0;
}

void solve(){
    sort(s,s+n,cmp);
}

int main(int argc, const char * argv[]) {
    freopen("sorting4.txt","r",stdin);
    
    int ntest;
    
    scanf("%d",&ntest);
    
    for (int itest=0;itest<ntest;itest++){
        input();
        solve();
        output();
    }
    
}
