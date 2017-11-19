#include<iostream>
#include<fstream>
#include<math.h>
using namespace std;

void solve(){	
    int n,a; 
    cin>>n>>a;
    int tich =a;int kq =1;
	for(int i=1;i<n;i++){
		cin>>a;
		tich = tich*a;
		if(tich>=0){
			kq=0;
		}
		tich =a;
	}
	cout<<"\n"<<kq;
}
int main(){
	//freopen("input.txt","r",stdin);
	int ntest;
	cin>>ntest;
	for(int i=0;i<ntest;i++){
		solve();
	}
	return 0;
}

