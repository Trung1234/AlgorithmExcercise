#include <iostream>
using namespace std;

int main()
{
	int n,m,i,j;
	cout<<"nhap vao chieu cao ca rong";
    cin>>n>>m; 
   
    if(m%2==1){
    for (i=1;i<=n;i++){
    for(j=1;j<=m;j++){
        if(i==1) cout<<("*");
        else {
            if(j==(((n/2)+1))) cout<<("*");
        else cout<<(" ");
        }
    }	
		
		cout<<("\n");  	
    }		
    }
    else cout<<("so m nhap vao ko dung");
    
    
    
    
   
    return 0;
}
