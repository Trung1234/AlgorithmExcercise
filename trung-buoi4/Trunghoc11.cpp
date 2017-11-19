#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <fstream>
#include <stdio.h>
#include <math.h>

using namespace std;

int arr[111][111];
int dem = 0;
int n,result;

void input(){
	scanf("%d",&n);

	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			scanf("%d",&arr[i][j]);	
		}
	}	
}

void solve(){
	result = 0;
	dem = 0;
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(arr[i][0]==arr[i][n-1] && i==j){
				dem++;
			}
		}
	}	
	if(dem == n){
		result = 1;
	}
}

void output(){
	printf("%d\n",result);
}

int main(){
	int nTest;
	freopen("Trunghoc11.inp","r",stdin);
	scanf("%d",&nTest);
	
	for(int Itest=0; Itest<nTest; Itest++){
		input();
		solve();
		output();
	}
	
	return 0;
}
