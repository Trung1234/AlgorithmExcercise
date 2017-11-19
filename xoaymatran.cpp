#include <stdio.h>

int main(){
	int a[100][100],n,m,i,j;
	//freopen("input.txt","r",stdin);
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(i=n-1;i>=0;i--){
		for(j=m-1;j>=0;j--){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
