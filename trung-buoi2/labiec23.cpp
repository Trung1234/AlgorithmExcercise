#include <iostream>
using namespace std;
int TongChuSo(int n){
	int k,s=0;
	while(n > 0){
		k = (n%10); // chia lay du
		s = s + k;
		n = (n/10);
	}
	return s;
}

int main(){
	int n;
	cout<<"moi nhap vao so n : "; cin>>n;
	int ChuSo = TongChuSo(n);
 	if(n<=10000){
 		cout<<"\n tong cac chu so cua n la "<<ChuSo;
	}
	else{
		cout<<"\n moi nhap lai n";
	}
	return 0;
}
