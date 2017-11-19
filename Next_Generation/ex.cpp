#include<iostream>
#include<math.h>
using namespace std;
int B[100];
int namChuSo(){
	if(B[1] == 0) return 0;
	return 1;
}
int soNT(int a){
	if(a<2) return 0;
	if(a==2) return 1;
	for(int i=2;i<=sqrt(a);i++){
		if(a%i==0) return 0;
	}
	return 1;
}
int ChuSoNT(){
	for(int i=1;i<=5;i++){
		if(!soNT(B[i])) return 0;
	}
	return 1;
}
long GiaTriDaoNguoc(int *M,int n){
	long s =0, t =1;
	for(int i=1;i<=n;i++){
		s = s+ M[i]*t; 
		t = t*10; 
	}
	return s;
}
int stop =0;
void SinhTiep(){
	int i =5;
	while(i>0&&B[i]==9){
		B[i]=0;
		i--;
	}
	if(i==0) stop =1;
	else B[i]++;
}
void Xuat(){
	for(int i=1;i<=5;i++) cout<<B[i]<<"  ";
	cout<<"\n";
}

void SinhLienTiep(){
	
	while(!stop){
		long a = GiaTriDaoNguoc(B,5);
		if(soNT(a)&&ChuSoNT()&&namChuSo())
			Xuat();
			SinhTiep();
		
	}
	
}
void KhoiTao(){
	for(int i=1;i<=5;i++) B[i] = 0;
}
int main(){
	KhoiTao();
	SinhLienTiep();
}
