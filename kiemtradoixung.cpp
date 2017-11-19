#include <stdio.h>
#define max 10
 
int doixung(int a[max][max], int n)
{
    int k, j;
    for (k=0; k < n; k++)
        for (j = 0; j < n && a[k][j] == a[j][k]; j++);
    return k == j;
}
void input(){
	printf("moi nhap vao so hang va cot cua ma tran \n");
    scanf(n;

    	for (int i=1;i<=n;i++)
        	for (int j=1;j<=n;j++)
            	cin>>a[i][j];
	
}

void output(){
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n;j++)
            cout<<a[i][j];
        printf("\n");
    }
    
}
int main()
{  
   // int a[max][max] = {{1,2,3},{2,4,5},{3,5,6}};
    printf("\n%d",doixung(a,3));
}
