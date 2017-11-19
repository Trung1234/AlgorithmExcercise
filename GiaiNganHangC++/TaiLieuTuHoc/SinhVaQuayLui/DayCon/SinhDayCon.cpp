#include<iostream>
using namespace std;
int C[100],n,k;
void KhoiDau()
{
	for (int i=1;i<=k;i++) C[i]=i;
}
void XuatKetQua()
{
	for (int i=1;i<=k;i++) cout<<C[i]<<"   ";
	cout<<"\n";
}
int stop = 0;
void SinhTiep()
{
	int i=k;
	while (i>0&&C[i]==n-k+i) i--;
	if (i>0) 
	{
		C[i]=C[i]+1;
		for (int j=i+1;j<=k;j++) C[j]=C[i]+j-i;
	}
	else stop = 1;
}
void SinhLienTiep()
{
	while(!stop)
	{
		XuatKetQua();
		SinhTiep();
	}
}
int main()
{
	cout<<"Nhap n : ";
	cin>>n;
	cout<<"Nhap So Phan Tu Cua Day Con : ";
	cin>>k;
	KhoiDau();
	SinhLienTiep();
}
