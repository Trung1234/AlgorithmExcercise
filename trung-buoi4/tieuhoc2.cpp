#include<iostream>
#include<fstream>
#include<math.h>
using namespace std;
int n; 
int a[111];
int ntest;
// Ham kiem tra 1 so co phai la so NT hay khong? Dung thi tra ve 1, nguoc lai tra ve 0
void input(){
	cout<<"nhap vao so n"<<endl;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
}
void output(){
	int tong = 0;
	int tich = 1;
	for(int i=0;i<n;i++){
		tong = tong*a[i];
		tich = tich*a[i];
	}
	float tbc  = 1.0*tong/n;
	cout<<" "<<tong<<" "<<tich<<" ";
	cout<<endl;
}
int main(){
	//freopen("input.txt","r",stdin);
	cout<<"nhap vao so ntest"<<endl;
	cin>>ntest;
	for(int i=0;i<ntest;i++){
		input();
		output();
	}
	return 0;
}