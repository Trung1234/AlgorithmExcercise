#include<iostream>
using namespace std;
int C[100],n;
void KhoiDau()
{
	for (int i=1;i<=n;i++) C[i]=i;
}
void XuatKetQua()
{
	for (int i=1;i<=n;i++) cout<<C[i]<<"    ";
	cout<<"\n";
}
void Swap(int &a,int &b)
{
	int tmp;
	tmp=a; a=b; b=tmp;
}
int stop =0;
void SinhTiep()
{
	int i=n;
	while (i>1&&C[i]<C[i-1]) i--;
	if (i>1)
	{
	int k=n;
	while (C[k]<C[i-1]) k--;
	Swap(C[k],C[i-1]);
	int r=i,s=n;
	while(r<s)
	{
		Swap(C[r],C[s]);
		r++; s--;
	}
	}
	else stop = 1;
}
void SinhLienTiep()
{
	while (!stop)
	{
		XuatKetQua();
		SinhTiep();
	}
}
int main()
{
	cout<<"Nhap n : ";
	cin>>n;
	KhoiDau();
	SinhLienTiep();
}
