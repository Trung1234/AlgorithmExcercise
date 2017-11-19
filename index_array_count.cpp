#include<iostream>
using namespace std;
int n;
int a[111];
int dem[111];
void input(){
	cout<<"nhap vao so n: "<<endl;
	cin>>n;
	for(int i=0;i< n;i++){
		cin>>a[i];
	}
}
void solve(){
	for(int i=0;i<n;i++){
		dem[ a[i] ]++;
	}
	for(int i=0;i<n;i++){
		if(dem[i]>0){
			cout<<dem[i]<<" lan xuat hien "<<i<<endl;
		}
	}
}
int main(){
	input();
	solve();
}
