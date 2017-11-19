#include <iostream>
#include <fstream>
#include <math.h>
#include <string.h>
#include <stdio.h>
#include <algorithm>
 
using namespace std;
 
int n;
int s[1111];
 
void input(){
    scanf("%d",&n);
   
    for (int i=0;i<n;i++)
        scanf("%d",&s[i]);
}
 
int binSearchNhoHonGanNhat(int num){
    int res = -1;
    int dau = 0;
    int cuoi = n-1;
   
    while (dau <= cuoi){
        int mid = (dau+cuoi)/2;
        int key = s[mid];
       
        if ( num > key ){
            dau = mid+1;
            res = mid;
        }else if ( num < key ){
            cuoi = mid-1;
        }else{
            cuoi = mid-1;
        }
    }
   
    return res;
}
 
int binSearchLonHonGanNhat(int num){
    int res = -1;
    int dau = 0;
    int cuoi = n-1;
   
    while (dau <= cuoi){
        int mid = (dau+cuoi)/2;
        int key = s[mid];
       
        if ( num > key ){
            dau = mid+1;
        }else if ( num < key ){
            cuoi = mid - 1;
            res = mid;
        }else{
            dau = mid+1;
        }
    }
   
    return res;
}
 
void solve(){
    int m,x;
   
    scanf("%d",&m);
   
    for (int i=0;i<m;i++){
        scanf("%d",&x); // nhap chieu cao cua con khi can tim
       
        int l = binSearchNhoHonGanNhat(x);
        int r = binSearchLonHonGanNhat(x);
       
        if ( l == -1)
            printf("X");
        else
            printf("%d",s[l]);
           
        printf(" ");
       
        if ( r == -1)
            printf("X");
        else
            printf("%d",s[r]);
        printf("\n");
    }
}
 
int main(int argc, const char * argv[]) {
    freopen("playboychimp.txt","r",stdin);
   
    int ntest;
   
    scanf("%d",&ntest);
   
    for (int itest=0;itest<ntest;itest++){
        input();
        solve();
    }
}
