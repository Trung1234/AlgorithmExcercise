#include <iostream>
#include <fstream>
#include <math.h>
#include <string.h>
#include <stdio.h>
#include <algorithm>

using namespace std;

int n,k;
int s[1111];

void input(){
    scanf("%d",&n);
    
    for (int i=1;i<=n;i++)
        scanf("%d",&s[i]);
}

int timViTri(int num){
    for (int i=1;i<=n;i++)
        if ( s[i] >= num )
            return i;
    
    return -1;
}

int timViTriBinary_Search(int x){
    int dau = 1;    // index min
    int cuoi = n;   // index max
    int result = -1;
    
    while ( dau <= cuoi ){  // dam bao la cai sub array ton tai
        int mid = (dau+cuoi)/2;
        int key = s[mid];
        
        if ( key > x ){
        	if(key-x<=k )
                result = mid;   // luu ket qua tam thoi
                cuoi = mid-1;   // re trai
        }else if ( key < x ){
            // re phai
            dau = mid+1;
        }else{
            // deo re nua
            return mid;
        }
    }
    
    return result;
}

void solve(){
    int m,x;
    
    scanf("%d",&m);
    for (int i=0;i<m;i++){
        scanf("%d",&x);
        
        int idx = timViTriBinary_Search(x);
        
        printf("%d ",idx);
    }
    printf("\n");
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
