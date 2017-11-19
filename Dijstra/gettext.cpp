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
 
using namespace std;

#define inf 1000000000

struct lang
{
	int best;
	int vis;
	int pre;
	int idx;
};

int nlang,nduong;
int bd,kt;
lang langArr[1111];
int s[1111][1111];
struct cmp{
	bool operator() (lang a,lang b) {
		return a.best<b.best;
	}
};
priority_queue <lang,vector<lang>,cmp > pqueue;

void input(){
	int a,b,x;
	
	memset(s,0,sizeof(s));

	scanf("%d %d",&nlang,&nduong);
	scanf("%d %d",&bd,&kt);

	for (int i=0;i<nduong;i++){
		scanf("%d %d %d",&a,&b,&x);
		s[a][b] = x;
		s[b][a] = x;
	}
}

void suanhan(lang cur){
	for (int nex=1;nex<=nlang;nex++){
		if ( langArr[nex].vis == 1 || s[cur.idx][nex] == 0)		// ko di nguoc lai diem da danh dau
			continue;											// neu ko co duong thi cung nex

		int temp = cur.best + s[cur.idx][nex];						// tim trang thai moi
		if ( temp < langArr[nex].best ){								// so sanh voi trang thai cu
			// neu tot hon thi cap nhat
			langArr[nex].best = temp;
			langArr[nex].pre = cur.idx;
			pqueue.push(langArr[nex]);
		}
	}
}

lang timmin(){
	lang cur = pqueue.top();	// lay ra cai lang co best nho nhat
	pqueue.pop();				// lay ra roi thi vut no di

	return cur;
}

void solve(){
	for (int i=1;i<=nlang;i++){
		lang cur;
		cur.best = inf;
		cur.pre = i;
		cur.vis = 0;
		cur.idx = i;

		langArr[i] = cur;
	}
	langArr[bd].best = 0;

	while (!pqueue.empty())
		pqueue.pop();

	while (langArr[kt].vis == 0){
		lang cur = timmin();		// tim min
		cur.vis = 1;				// danh dau
		suanhan(cur);				// sua nhan
	}

	printf("%d\n",langArr[kt].best);
}

int main()
{
    freopen("input.txt","r",stdin);
   
    int ntest;
    scanf("%d",&ntest);

    for (int itest=0;itest<ntest;itest++){
    	input();
    	solve();
    }
   
    return 0;
}
