#include <iostream>
#include <fstream>
#include <math.h>
#include <string.h>
#include <stdio.h>

using namespace std;

int nhang,ncot;
int a[111][111];
int ntest, tong=0;

void input(){
	printf("moi nhap vao so hang va cot cua ma tran \n");
    scanf("%d %d",&nhang,&ncot);
    if(ncot==nhang){
    	for (int i=0;i<nhang;i++)
        	for (int j=0;j<ncot;j++)
            	scanf("%d",&a[i][j]);
	}
    else{
    	printf("day khong phai ma tran vuong");
	}
}

void output(){
    for (int i=0;i<nhang;i++){
        for (int j=0;j<ncot;j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }
    
}
void solve(){
	for (int i=0;i<nhang;i++){
        for (int j=0;j<ncot;j++){
        	if(i==j){
				tong = tong +a[i][j];
			}
			
		}	
	}
	int min=a[0][0];
	for (int i=1;i<nhang;i++){
        for (int j=1;j<ncot;j++){
        	
			if(i==j&&a[i][j]<min){
				min = a[i][j];
			}
		}	
	}
	printf("tong duong cheo la %d",tong);
	printf("\n phan tu nho nhat trong duong cheo la la %d",min);
}
int main(int argc, const char * argv[]) {
    
    input();
    output();
    solve();
    
}
