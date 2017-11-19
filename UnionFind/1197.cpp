#include <iostream>
#include <fstream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <map>
#include <vector>
#include <algorithm>
#include <queue>
 
#define fi "input.txt"
#define fo "labyrinth.out"
#define pb push_back
#define ll long long
 
using namespace std;
 
int nSinhVien,nLop;
int pre[1111];
int sz[1111];
 
int timgoc(int idx){
    if ( pre[idx] == idx )
        return idx;
    return pre[idx] = timgoc(pre[idx]);
}
 
void solve(){
    int siso;
   
    for (int i=0;i<=nSinhVien;i++){
        pre[i] = i;
        sz[i] = 1;
    }
   
   
    for (int i=0;i<nLop;i++){
        scanf("%d",&siso);
       
        int toTruong = -1,toVien;
        for (int j=0;j<siso;j++){
            scanf("%d",&toVien);
           
            if ( j == 0 )
                toTruong = toVien;
            else{
                int a = toTruong;
                int b = toVien;
               
                int v1 = timgoc(a);
                int v2 = timgoc(b);
               
                if ( v1 == v2 )
                    continue;
               
                if (v1 < v2){
                    pre[v2] = v1;
                    sz[v1] += sz[v2];
                    sz[v2] = 0;
                }else{
                    pre[v1] = v2;
                    sz[v2] += sz[v1];
                    sz[v1] = 0;
                }
            }
        }
    }
   
    printf("%d\n",sz[0]);
}
 
int main()
{
    freopen("input.txt","r",stdin);
   
    while (scanf("%d %d",&nSinhVien,&nLop) > 0 ) {
        if (nSinhVien+nLop == 0 )
            break;
        solve();
    }
   
    return 0;
}
