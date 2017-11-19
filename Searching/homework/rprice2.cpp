#include <math.h>
#include <stdio.h>
#include <fstream>
#include <iostream>
#include <string.h>
#include <algorithm>

using namespace std;

int n,k,m,x;
int arr[111];

void input(){
	scanf("%d %d", &n, &k);
	
	for(int i=1; i<=n; i++){
		scanf("%d", &arr[i]);
	}	
}

int binarySearch(int x){
	int dau = 1;
	int cuoi = n;
	int result = -1;
	
	while (dau <= cuoi){
		int mid = (dau+cuoi)/2;
		int key = arr[mid];
		
		if(key > x){
			for(int i = (x-k); i < x; i++){
				if(i == key){
					result = mid;
				}
			}
			cuoi = mid - 1;// re trai
		} 
		
		else if(key < x){
			for(int i = (x-k); i < x; i++){
				if(i == key){
					result = mid;
				}
			}
			dau = mid + 1; // re phai
		}
		
		else {
			return mid;
		}
	}
	return result;
}

void solve(){
	scanf("%d", &m);
	
	for(int i=0; i<m; i++){
		scanf("%d", &x);
		int index = binarySearch(x);
		printf("%d ",index);
	}
	printf("\n");
}

int main(int argc, const char * argv[]) {
    freopen("rprice.txt","r",stdin);
    
    int ntest;
    
    scanf("%d",&ntest);
    
    for (int itest=0;itest<ntest;itest++){
        input();
        solve();
    }
    
}
