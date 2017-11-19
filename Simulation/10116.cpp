#include <iostream>
#include <fstream>
#include <math.h>
#include <string.h>
#include <stdio.h>
#include <algorithm>

using namespace std;
struct toado
{
	int hang;
	int cot;
};


toado hg[4]={-1,0 // hg[0]
,0,1 // hg[1]
,1,0 // hg[2]
,0,-1}; // hg[3]
toado cur;
int nhang,ncot,cotxuatphat;
char s[111][111];
int dem[111][111];


int getIndexfromChar(char x)
{
	if (x=='N') return 0;
	if (x=='E') return 1;
	if (x=='S') return 2;
	if (x=='W') return 3;
	return -1;
}
bool isInMatrix(int i, int j)
{
	if (i<0 || i>nhang-1) return 0;
	if (j<0 || j>ncot-1) return 0;
	return 1;
}
int timSoBuocTrongVong(int a, int b)
{
	memset(dem,0,sizeof(dem));
	int demsobuoc=0;
	dem[a][b]=1;
	while (dem[a][b] == 1)
	{
		int idx=getIndexfromChar(s[a][b]);
		a= a+ hg[idx].hang ;
		b= b+ hg[idx].cot ;
//		dem[a][b]++;
		demsobuoc++;
	}
	return demsobuoc;
}
void input()
{
	scanf("%d %d %d",&nhang,&ncot,&cotxuatphat);
	for (int i=0;i<nhang;i++)
		scanf("%s",&s[i]);
}
void solve()
{
	cur.hang = 0;
	cur.cot = cotxuatphat-1;
	dem[ cur.hang ][ cur.cot ]= 1;
	int demsobuocdi = 0;
	int sobuoctrongvong = 0;
	while (isInMatrix(cur.hang,cur.cot))
	{
		int idx = getIndexfromChar(s[cur.hang][cur.cot]);
		cur.hang = cur.hang + hg[idx].hang;
		cur.cot = cur.cot + hg[idx].cot;
		demsobuocdi++;
		dem[ cur.hang ][ cur.cot ]++;
		if (dem[ cur.hang ][ cur.cot ] > 1) 
		{
			sobuoctrongvong= timSoBuocTrongVong( cur.hang ,cur.cot );
			demsobuocdi= demsobuocdi - sobuoctrongvong;
			break;
		}
	}
	if (sobuoctrongvong == 0) 
	{
		printf("%d step(s) to exit\n",demsobuocdi);
		memset(dem,0,sizeof(dem));
	}
	else 
		printf("%d step(s) before a loop of %d step(s)\n",demsobuocdi,sobuoctrongvong);
}

int main(int argc, const char * argv[]) 
{
    freopen("10116.txt","r",stdin);
    
    int ntest;
    
    scanf("%d\n",&ntest);
    
    for (int itest=0;itest<ntest;itest++)
	{
		input();
        solve();
    }
    
}
