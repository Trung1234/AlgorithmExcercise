#include <iostream>
#include <fstream>
#include <math.h>
#include <string.h>
#include <stdio.h>
#include <algorithm>
 
using namespace std;
 
struct toado{
    int hang;
    int cot;
};
 
toado hg[4]={-1,0
    		,0,1
    		,1,0
    		,0,-1};
 
toado cur;
int nhang, ncot, cotxuatphat;
char s[111][111];
int visited[111][111];
 
void input(){
    	scanf("%d %d %d",&nhang,&ncot,&cotxuatphat);
	for (int i=0;i<nhang;i++)
		scanf("%s",&s[i]);
    
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
bool isOutMatrix(int i,int j){
	if(i < 0 || i > nhang-1)
		return true;
	if(j < 0 || j > ncot-1)
		return true;
	return false;		 
}
int soBuoctrongVong(int a,int b){
	memset(visited,0,sizeof(visited));
	int sobuoc = 0;
	visited[a][b]=1;
	while( visited[a][b] == 1){
		int idx = getIndexFromChar(s[a][b]);
		a = a + hg[idx].hang;
		b = b + hg[idx].cot;
		visited[a][b]++;
		sobuoc++;
	}
	return sobuoc;
}
void solve(){
	cur.hang = 0;// xuat phat tu hang dau tien
	cur.cot = cotxuatphat -1;
	visited[cur.hang][cur.cot] = 1;
	int sobuoctrongvong = 0;
	int sobuocdi = 0;
	while(isOutMatrix(cur.hang,cur.cot) == false){
		int idx = getIndexFromChar(s[cur.hang][cur.cot]);
		cur.hang = cur.hang +hg[idx].hang;
		cur.cot = cur.cot +hg[idx].cot;
		sobuocdi++;
		visited[ cur.hang ][ cur.cot ] ++;
		if (visited[ cur.hang ][ cur.cot ] > 1) 
		{
			sobuoctrongvong= soBuoctrongVong( cur.hang ,cur.cot );
			sobuocdi= sobuocdi - sobuoctrongvong;
			break;
		}
	}
	if (sobuoctrongvong == 0) 
	{
		printf("%d step(s) to exit\n",sobuocdi);
		memset(visited,0,sizeof(visited));
	}
	else 
		printf("%d step(s) before a loop of %d step(s)\n",sobuocdi,sobuoctrongvong);
}

int main(int argc, const char * argv[]) 
{
    freopen("robot.txt","r",stdin);
    
    int ntest;
    
    scanf("%d\n",&ntest);
    
    for (int itest=0;itest<ntest;itest++)
	{
		input();
        solve();
    }
    
}
		
	
	

