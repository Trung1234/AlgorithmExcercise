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
 
int nlang,nduong;
int pre[11111];
vector<int> vect;
// nhi?m v? 1 : tìm g?c c?a d?nh idx
// nhi?m v? 2 : d?n toàn b? du?ng di t? idx lên sát g?c
int timgoc(int idx){
    if ( pre[idx] == idx )  // neu no la trum thi return
        return idx;
    return pre[idx] = timgoc(pre[idx]);    // tim thang sep ke tiep
}
 
void solve(){
    for (int i=1;i<=nlang;i++)
        pre[i] = i;             // khoi tao no la trum cua chinh no
   
    int a,b;
   
    for (int i=0;i<nduong;i++){
        scanf("%d %d",&a,&b);
        int v1 = timgoc(a);     // tim trum cua a
        int v2 = timgoc(b);     // tim trum cua b
       
        if ( v1 == v2 )
            continue;       // nguoi nha thi ko danh nhau
       
        // khac nha thi bem bo me no di
        pre[v2] = v1;       // thang v1 dap chet thang v2 --> thang v2 coi thang v1 la sep moi
    }
   
    int count = 0;
    for (int i=1;i<=nlang;i++)
        if ( pre[i] == i )  // dem so trum cung chinh la dem so vung
            count++;
   
    printf("%d\n",count);
}
 
int main()
{
    freopen("input.txt","r",stdin);
   
    while (scanf("%d %d",&nlang,&nduong) > 0 ) {
        if (nlang+nduong == 0 )
            break;
        solve();
    }
   
    return 0;
}
