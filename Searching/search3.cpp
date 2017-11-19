#include <iostream>
#include <fstream>
#include <math.h>
#include <string.h>
#include <stdio.h>
#include <algorithm>

using namespace std;

struct NewNumber{
    int idx;
    int val;
};

int n,x;
NewNumber s[1111];

void input(){
    scanf("%d %d",&n,&x);
    
    for (int i=0;i<n;i++){
        scanf("%d",&s[i].val);  // nhap value cua mang
        s[i].idx = i+1;         // nhap index cho tung phan tu, dam bao khi sort ko bi lung tung
    }
}

// tim so co index nho nhat co gia tri = x
int bin_search_trai(int x){
    int dau = 0;    // index min
    int cuoi = n-1;   // index max
    int result = -1;
    
    while ( dau <= cuoi ){  // dam bao la cai sub array ton tai
        int mid = (dau+cuoi)/2;
        int key = s[mid].val;
        
        if ( key > x ){
            // re trai
            cuoi = mid-1;
        }else if ( key < x ){
            // re phai
            dau = mid+1;
        }else{
            // re trai de tim result nho hon result cu ( tot hon )
            result = mid;    // luu kq tot hon
            cuoi = mid-1;           // re trai
        }
    }
    
    return result;
}

// tim so co index lon nhat co gia tri = x
int bin_search_phai(int x){
    int dau = 0;    // index min
    int cuoi = n-1;   // index max
    int result = -1;
    
    while ( dau <= cuoi ){  // dam bao la cai sub array ton tai
        int mid = (dau+cuoi)/2;
        int key = s[mid].val;
        
        if ( key > x ){
            // re trai
            cuoi = mid-1;
        }else if ( key < x ){
            // re phai
            dau = mid+1;
        }else{
            // re phai de tim result lo*n hon result cu ( tot hon )
            result = mid;    // luu kq tot hon
            dau = mid+1;          // re phai
        }
    }
    
    return result;
}

bool cmp(NewNumber so1,NewNumber so2){
    // sort gia tri truoc
    if ( so1.val < so2.val )
        return 1;
    if ( so1.val > so2.val )
        return 0;
    
    // gia tri bang nhau thi sort index
    if ( so1.idx < so2.idx )
        return 1;
    return 0;
}

void solve(){
    
    // sort truoc khi search
    sort(s,s+n,cmp);
    

    // search sau khi sort
    int l = bin_search_trai(x);
    int r = bin_search_phai(x);
    
    if ( l == -1 || r == -1 )
        printf("-1");
    else{
        for (int i=l;i<=r;i++)
            printf("%d ",s[i].idx);
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

