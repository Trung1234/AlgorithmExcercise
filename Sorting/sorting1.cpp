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

// ham so sanh giua 2 phan tu
// s1 dung truoc , s2 dung sau
// xac dinh cach sap xep giua 2 phan tu
bool cmp(int s1,int s2){
    if ( s1 > s2 )
        return false;
    return true;
}

void solve(){
    // cach 1 : sort tu be den lon
    
    // bien the 1
    //sort(a,a+n);
    // dao thu tu array
    //reverse(a,a+n);
    
    // cach 2 : sort voi ham compare tham so
    sort(a,a+n,cmp);
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
