#include <iostream>
#include <fstream>
#include <math.h>
#include <string.h>
#include <stdio.h>
#include <algorithm>
 
using namespace std;
int main(){
	int n;
	int a[111][111];
	a[0][0] = 1;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			
			printf("%d",a[i][j]);
			a[i][j] = a[i][j]+1;
		}
		printf("\n");
	}
}
