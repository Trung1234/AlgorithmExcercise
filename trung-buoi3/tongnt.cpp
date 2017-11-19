#include<iostream>
#include<fstream>
#include<math.h>
using namespace std;
// Ham kiem tra 1 so co phai la so NT hay khong? Dung thi tra ve 1, nguoc lai tra ve 0
int KiemTraSNT(int n) {	 
	if (n < 2) {
		return 0;
	}
	

		for (int i = 2; i <= int(sqrt(n)); i++)
		{
			if (n%i == 0) {
				return 0;				
			}
		}
	
	return 1;
}
int main(){
	int a,b,x=0;
	cin>>a>>b;
	for(int i=a;i<=b;i++){
		if(KiemTraSNT(i)==1){
			x=x+i;
		}
		
	}
	cout<<"tong la  "<<x;
}
