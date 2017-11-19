#include<iostream>
#include<fstream>
#include<math.h>
#define max 100
using namespace std;

// Ham kiem tra 1 so co phai la so NT hay khong? Dung thi tra ve 1, nguoc lai tra ve 0
bool isCapSoCong(int n,int a[max]){	
	int x = a[1]-a[0];
    for(int i=1;i<n;i++){
    	if(a[i]!=a[i-1]+x){
    		return false;
		}
	}
	return true;
}
int main(){
	int n;
	int a[n];
	cout<<"nhap vao so n "<<endl;
	cin>>n;
	cout<<"nhap vao mang a "<<endl;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	if(isCapSoCong(n,a)){
		cout<<"la cap so cong";
	}
	else{
		cout<<"khong la cap so cong";
	}
	return 0;
}

