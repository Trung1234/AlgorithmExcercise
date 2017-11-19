#include <iostream>
#include <fstream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <queue>
#include <map>
#include <algorithm>
#include <vector>

#define inf 1000000000

using namespace std;

int s[111][111];
bool d[111];
int b[111],pre[111];
int n,nduong,bd,kt;

void input(){
	int u,v,x;
	
	scanf("%d %d",&n,&nduong);
	scanf("%d %d",&bd,&kt);
	
	memset(s,0,sizeof(s));
	
	for (int i=0;i<nduong;i++){
		scanf("%d %d %d",&u,&v,&x);
		
		s[u][v] = x;
		s[v][u] = x;		
	}
}

int timmin(){
	int minn = inf;
	int res = -1;
	
	for (int i=1;i<=n;i++){
		if ( d[i] == 1 )
			continue;
			
		if ( b[i] < minn ){
			minn = b[i];
			res = i;
		}
	}
	
	return res;
}

void suanhan(int idx){
	for (int i=1;i<=n;i++){
		if ( s[idx][i] != 0 ){
			int temp = b[idx] + s[idx][i];
			
			if ( temp < b[i] ){
				b[i] = temp;
				d[i] = 0;
				pre[i] = idx;
			}
		}
	}
}

void solve(){
	for (int i=1;i<=n;i++){
		b[i] = inf;
		d[i] = 0;
		pre[i] = -1;
	}
	
	b[bd] = 0;
	
	while(d[kt] == 0){
		int idx = timmin();
		
		if ( idx == -1 )
			break;
			
		d[idx] = 1;
		suanhan(idx);
	}
}

void induong(int idx){
	if ( idx == -1 )
		return;
	induong(pre[idx]);
	printf("%d ",idx);
}

void output(){
	printf("%d\n",b[kt]);
	induong(kt);
	printf("\n");
}

int main()
{
	freopen("dijkstra1.inp","r",stdin);
	
	int ntest;
	scanf("%d",&ntest);
	
	for (int itest=0;itest<ntest;itest++){
		input();
		solve();
		output();
	}
	
	return 0;
}


