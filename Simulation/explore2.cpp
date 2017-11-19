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
int visited[1111][1111];
 
void input(){
    scanf("%s",&query);
}
 
// dieu huong voi idx la huong cu
// c la lenh
// idx la huong cu
// return huong moi sau khi nhan lenh
int getIndexFromChar(char c,int idx){
    if ( c == 'N' )
        return 0;
    if ( c == 'E' )
        return 1;
    if ( c == 'S' )
        return 2;
    if ( c == 'W' )
        return 3;
    if ( c == 'R' )
        return (idx+1)%4;// 3->0
    if ( c == 'L' )
        return (idx+3)%4;// 2 ->1
    if ( c == 'C' )
        return idx;
    if ( c == 'B' )
        return (idx+2)%4; // 2-> 4, 1->3
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
    int demSoLanDiLac = 0;
   
    // khoi tao vi tri xuat phat tai goc toa do
    cur.x = 0;
    cur.y = 0;
   
//    memset(visited,0, sizeof(visited));
   
    for (int i=0;i<len;i++){
        char c = query[i];
        //printf("%c ",c);
        int idx = getIndexFromChar(c,idx);
        // di chuyen theo huong idx
        cur.x = cur.x + hg[idx].x;
        cur.y = cur.y + hg[idx].y;
       
        visited[ cur.x+200 ][ cur.y+200 ]++; // don phan tu sang phan duong(+) de array ko bi loi
        if (visited[cur.x+200][cur.y+200] > 1)
            demSoLanDiLac++;
    }
   
    double distance = calDistance(cur);
    printf("%.2lf %d\n",distance,demSoLanDiLac);
}
 
int main(int argc, const char * argv[]) {
    freopen("explore2.txt","r",stdin);
   
    int ntest;
   
    scanf("%d",&ntest);
   
    for (int itest=0;itest<ntest;itest++){
        input();
        solve();
    }
}
