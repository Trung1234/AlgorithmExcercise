#include <iostream>
#include <fstream>
#include <math.h>
#include <string.h>
#include <stdio.h>
#include <map>
#include <stack>
#include <queue>
using namespace std;

int n;



void solve(){
	queue<int> qu;
    for(int i;i<=n;i++)
    	qu.push(i);
    // qu.front() tro den phan tu dau cua queue
	// qu.empty() check queue rong
	// qu.back() // tro den ohan tu cuoi cua queue
	// qu.pop() // bo phan tu o dua queue
	while(qu.size()>1){
		qu.pop();
		int a = qu.front();
		qu.pop();
		qu.push(a);
	}		
	printf("%d \n",qu.front());
}

int main(int argc, const char * argv[]) {
    freopen("queue.txt","r",stdin);
    
    while (scanf("%d",&n)>0 ) {
        solve();
    }
}
