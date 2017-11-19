#include <iostream>
#include <math.h>
#define max 10
using namespace std;
int n;
int a[max][max];
int ntest, tong=0;
//int max=0;
int checkDuong(int a[max][max],int n){// ba?i na?y xin a ch??a
	for (int i=0;i<n;i++)
        	for (int j=0;j<n;j++)
            	if(j>i&&a[i][j]<0){
            		return 0;
				}
    return 1;        	
}
int checkAm(int a[max][max],int n){// ba?i na?y xin a ch??a
	for (int i=0;i<n;i++)
        	for (int j=0;j<n;j++)
            	if(j<i&&a[i][j]>0){
            		return 0;
				}
    return 1;        	
}
int checkDuongCheo(int a[max][max],int n){// ba?i na?y xin a ch??a
	for (int i=0;i<n;i++)
        	for (int j=0;j<n;j++)
            	if(j==i&&a[i][j]!=0){
            	
            			 	return 0;
					
				
				
				}
    return 1;   	
}
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
//void solve(){
//	cout<<"ket qua la  "<<checkDoiXung(a,n);
//
//}
int main(int argc, const char * argv[]) {
    
    input();
    output();
    if(checkDuongCheo(a,n)==1&&checkAm(a,n)==1&&checkDuong(a,n)==1){
    	cout<<"ma tran hop le :  1";
	}
	else{
		cout<<"ma tran khong hop le :  0";
	}
   
}
