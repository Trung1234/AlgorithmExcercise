#include <iostream>
#include <fstream>
#include <math.h>
#include <string.h>
#include <stdio.h>
#include <algorithm>

using namespace std;

struct boso{
    int so[3];
    
};

boso s[1111];
int n;

void input(){
    scanf("%d",&n);
    
    for (int i=0;i<n;i++){
    	for (int j=0;j<3;i++){
        	scanf("%d %d %d",&s[i].so[j]);
    	}
    	
    }
}

void output(){
    for (int i=0;i<n;i++){
    	for (int j=0;j<3;i++)
        	printf("%d %d %d\n",s[i].so[j]);
    }
    printf("\n");
}

bool cmp(boso b1,boso b2){
	for (int j=0;j<3;j++){
		if (b1.so[j] < b2.so[j])
        return 1;
    	if (b1.so[j] > b2.so[j])
        return 0;
	}
	return 0;
   
}

void solve(){
    sort(s,s+n,cmp);
}

int main(int argc, const char * argv[]) {
    freopen("sorting4.txt","r",stdin);
    
    int ntest;
    
    scanf("%d",&ntest);
    
    for (int itest=0;itest<ntest;itest++){
        input();
        solve();
        output();
    }
    
}
