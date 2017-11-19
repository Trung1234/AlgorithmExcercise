#include<iostream>
#include <fstream>
#include <math.h>
#include <string.h>
#include <stdio.h>
#include <algorithm>

using namespace std;
int n;
int a[1111];

void input(){
    scanf("%d",&n);
    
    for (int i=0;i<n;i++)
        scanf("%d",&a[i]);
}
void dummySelectionSort(int a[],int n){
	int i,j;
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			
			if(a[i]>a[j]&&a[i]%2==0&&a[j]%2==0){
				a[0]=a[j];
				swap(a[i],a[j]);
			}
			
			else if(a[i]<a[j]&&a[i]%2!=0&&a[j]%2!=0){
				swap(a[i],a[j]);
			}
		}
	}
}
void output(){
    for (int i=0;i<n;i++)
        printf("%d ",a[i]);
    printf("\n");
}

int main(int argc, const char * argv[]) {
    freopen("input.txt","r",stdin);
    
    int ntest;
    
    scanf("%d",&ntest);
    
    for (int itest=0;itest<ntest;itest++){
        input();
        dummySelectionSort(a,n);
        output();
    }
}
