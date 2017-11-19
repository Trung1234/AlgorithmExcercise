#include <iostream>
#include <fstream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <vector>
#include <algorithm>

#define pb push_back

using namespace std;

struct toado{
	int h,c;
};

toado huong[5] = { -1,0
				  ,0,1
				  ,1,0
				  ,0,-1};

vector<int> vect;
int nhang,ncot;
int s[111][111];
bool d[111][111];
toado q[11111];// queue

void input(){
	scanf("%d %d",&nhang,&ncot);
	
	for (int i=0;i<nhang;i++)
		for (int j=0;j<ncot;j++)
			scanf("%d",&s[i][j]);
}

toado doMove(toado from,int hg){
	toado to;
	
	to.h = from.h + huong[hg].h;
	to.c = from.c + huong[hg].c;
	
	return to;
}

bool isOut(toado t){
	if ( t.h < 0 || t.h >= nhang )
		return 1;
	if ( t.c < 0 || t.c >= ncot )
		return 1;
	return 0;
}

int loang(int hang,int cot){
	int dau = -1;
	int cuoi = 0;
	toado cur,next;
	
	cur.h = hang;
	cur.c = cot;
	q[0] = cur;
	d[hang][cot] = 1;
	
	while ( dau < cuoi ) {
		dau++;
		cur = q[dau];
		
		for (int i=0;i<4;i++){
			next = doMove(cur,i);
			
			if ( isOut(next) )
				continue;
				
			if ( d[next.h][next.c] == 0 && s[next.h][next.c] == 0){
				d[next.h][next.c] = 1;
				cuoi++;
				q[cuoi] = next;
			}
		}
	}
	
	return cuoi+1;
}

void solve(){
	vect.clear();
	for (int i=0;i<nhang;i++)
		for (int j=0;j<ncot;j++)
			d[i][j] = 0;
			
	for (int i=0;i<nhang;i++){
		for (int j=0;j<ncot;j++){
			if ( d[i][j] == 0 && s[i][j] == 0){
				int sz = loang(i,j);
				
				vect.pb(sz);
			}
		}
	}
	
	sort(vect.begin(),vect.end());
}

void output(){
	printf("%d",vect.size());
	
	for (int i=0;i<vect.size();i++)
		printf(" %d",vect[i]);
	printf("\n");
}

int main()
{
	freopen("loang1.inp","r",stdin);
	
	int ntest;
	scanf("%d",&ntest);
	
	for (int itest=0;itest<ntest;itest++){
		input();
		solve();
		output();
	}
	
	return 0;
}


