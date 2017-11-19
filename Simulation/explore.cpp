#include <iostream>
#include <fstream>
#include <math.h>
#include <string.h>
#include <stdio.h>
#include <algorithm>
 
using namespace std;
 
struct toado{
    int x;
    int y;
};
 
toado hg[4]={0,1
            ,1,0
            ,0,-1
            ,-1,0};
 
toado cur;
char query[11111];
 
void input(){
    scanf("%s",&query);
}
 
int getIndexFromChar(char c){
    if ( c == 'N' )
        return 0;
    if ( c == 'E' )
        return 1;
    if ( c == 'S' )
        return 2;
    if ( c == 'W' )
        return 3;
    return -1;
}
 
// ham tinh khoang cach tu 1 diem den goc toa do
double calDistance(toado t){
    int tx = t.x*t.x;
    int ty = t.y*t.y;
    return sqrt(tx+ty);
}
 
void solve(){
    int len = strlen(query);
   
    // khoi tao vi tri xuat phat tai goc toa do
    cur.x = 0;
    cur.y = 0;
    for (int i=0;i<len;i++){
        char c = query[i];
        int idx = getIndexFromChar(c);
        // di chuyen theo huong idx
        cur.x = cur.x + hg[idx].x;
        cur.y = cur.y + hg[idx].y;
        //printf("%d %d\n",cur.x,cur.y);
    }
   
    double distance = calDistance(cur);
    printf("%.2lf\n",distance);
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
