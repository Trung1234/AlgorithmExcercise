#include<iostream>
#define max 100
using namespace std;
int a[max];
void swap(int &x,int &y)
 {int tmp=x;x=y;y=tmp;}
void quicksort(int left,int right)
 {int x = a[(left+right)/2];
  int i =left;
  int j = right;
  do{
  	while(a[i]<x) i++;
  	while(a[j]>=x) j--;
  	if(i<=j){
  	  	swap(a[i],a[j]);
  	  	i++;
  	  	j--;
	}
  }while(i<j);
  if(left<j){
  	 	quicksort(left,j);
  }
  if(i<right){
  	 	quicksort(i,right);
  }
  
  }
int main(){
	int n;
	float a[n];
	cin>>n;
	cout<<"nhap vao mang a"<<endl;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	quicksort(0,n-1);
	for(int i=0;i<n;i++){
		cout<<a[i];
	}
	return 0;
}
