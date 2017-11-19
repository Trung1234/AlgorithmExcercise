#include <iostream>
#include <fstream>
#include <math.h>
#include <string.h>
#include <stdio.h>
#include <algorithm>

using namespace std;

int n;
int s[1111];

void input(){
    scanf("%d",&n);
    
    for (int i=1;i<=n;i++)
        scanf("%d",&s[i]);
}
int timvitriBinarySearch(int x){
	int low = 1, up = n;
	
	while(low <= up){
		int mid = (up+low)/2;
		if(s[mid]<x){
			low = mid +1;
		}
		else if(s[mid]>x){
			up = mid -1;
		}
		else{
			return mid;
		}
	}
	return -1;
}
void solve(){
    int m,x;
    
    scanf("%d",&m);
    for (int i=0;i<m;i++){
        scanf("%d",&x);
        
        int idx = timvitriBinarySearch(x);
        
        printf("%d ",idx);
    }
    printf("\n");
}

int main(int argc, const char * argv[]) {
    freopen("search.txt","r",stdin);
    
    int ntest;
    
    scanf("%d",&ntest);
    
    for (int itest=0;itest<ntest;itest++){
        input();
        solve();
    }
    
}
