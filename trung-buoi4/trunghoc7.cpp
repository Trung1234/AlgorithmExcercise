#include <iostream>
#include <math.h>
#define max 10
using namespace std;
int n,x;
int a[max][max];

void input(){
	cout<<"moi nhap vao so hang va cot cua ma tran \n";
    cin>>n;

    	for (int i=0;i<n;i++)
        	for (int j=0;j<n;j++)
            	cin>>a[i][j];
	
}

void output(){
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++)
            cout<<a[i][j];
        cout<<"\n";
    }
    
}
int solve(int x){

	for (int i=0;i<x;i++){
        for (int j=0;j<x;j++)
        	if(a[i][j]==0){
        		return 0;
			}	
    }
	return 1;
}
int main(int argc, const char * argv[]) {
    
    input();
    output();
    cout<<"nhap vao x: "<<endl;
    cin>>x;
    if(solve(x)==0){
    	cout<<"khong phai";
	}
    
}
