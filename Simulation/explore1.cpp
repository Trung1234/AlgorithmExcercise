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
 // id la huong cu
 // return huong moi sau khi nhan lenh
 
int getIndexFromChar(char c,int index){
    if ( c == 'N' )
        return 0;
    if ( c == 'E' )
        return 1;
    if ( c == 'S' )
        return 2;
    if ( c == 'W' )
        return 3;
    if ( c == 'R')
		return  (index +1 )%4; 
	if ( c == 'L')
		return  (index +3 )%4;2
	if ( c == 'C')
		return  index;
	if ( c == 'B')
		return  (index +1 )%4; 	 	   
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
        int idx = getIndexFromChar(c,idx);
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
