#include <iostream>
#include <fstream>
#include <math.h>
#include <string.h>
#include <stdio.h>
#include <algorithm>

using namespace std;

int n,a,b;
char query[1111];
int s[1111];
struct toado{
	int x;
	int y; 
};
toado hg[4] = {0,1
			,1,0
			,0,1,
			-1,0};
toado cur;					

void input(){
    scanf("%s",&query);
}
int getIndexFromChar(char c){
	if( c == 'N')
		return 0;
	if( c == 'E')
		return 1;
	if( c == 'S')
		return 2;
	if( c == 'W')
		return 3;
	return -1;				
}
void solve(){
	int len = strlen(query);
	
	// khoi tao vi tri xuat phat tai goc toa do
    cur.x = 0;
    cur.y = 0;
	for(int i=0;i<len;i++)
    	char c = query[i];
    	int idx = getIndexFromChar(c);
    	//di chuyen thoe huong idx
   		cur.x = cur.x + hg[idx].x;
    	cur.y = cur.y + hg[idx].y;
    	printf("%d %d \b",&cur.x,&cur.y);
}




int main(int argc, const char * argv[]) {
    freopen("demo.txt","r",stdin);
    
    int ntest;
    
    scanf("%d",&ntest);
    
    for (int itest=1;itest<=ntest;itest++){
        input();
        solve();
        printf("\n");
    }
    
}
