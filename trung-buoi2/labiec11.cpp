#include <iostream>
using namespace std;
int main(){
	int m,n,i,j;
	cout<<"nhap vao chieu cao va rong cua hcn"<<endl;
	cin>>m>>n;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			if(i==0 || i==n-1 || j==0 || j==m-1){
				cout<<"*";
			}
			else{
				cout<<" ";
			}
		}
		cout<<"\n";
	}
	return 0;
}
