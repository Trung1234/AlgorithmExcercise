#include <iostream>
#include <math.h>
#define max 10
using namespace std;
int n,m;
int a[max][max];
int ntest, tong=0;



void input(){
	cout<<"moi nhap vao so hang va cot cua ma tran \n";
    cin>>n;

    	for (int i=0;i<n;i++)
        	for (int j=0;j<n;j++)
            	cin>>a[i][j];
	
}

void output(){
		cout<<"ta co  ma tran la\n";
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++)
            cout<<a[i][j];
        cout<<"\n";
    }
    
}
void solve(){
	cout<<"ta co  ma tran  nghich dao la\n";
	for (int j=0;j<n;j++){
        for (int i=0;i<n;i++)
            cout<<a[i][j];
        cout<<"\n";
    }

}
int main(int argc, const char * argv[]) {
    
    input();
    output();
    solve();
    
}
