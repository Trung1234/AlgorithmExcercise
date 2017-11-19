#include <iostream>
#include <math.h>
#define max 10
using namespace std;
int n;
int a[max][max];
int ntest, tong=0;
//int max=0;
int checkDoiXung(int a[max][max],int n){// ba?i na?y xin a ch??a
	for (int i=1;i<=n;i++)
        	for (int j=1;j<=i;j++)
            	if(a[i][j]!=a[j][i]) return 0;
    return 1;        	
}


void input(){
	cout<<"moi nhap vao so hang va cot cua ma tran \n";
    cin>>n;

    	for (int i=1;i<=n;i++)
        	for (int j=1;j<=n;j++)
            	cin>>a[i][j];
	
}

void output(){
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n;j++)
            cout<<a[i][j];
        cout<<"\n";
    }
    
}
void solve(){
	cout<<"ket qua la  "<<checkDoiXung(a,n);

}
int main(int argc, const char * argv[]) {
    
    input();
    output();
    solve();
    
}
