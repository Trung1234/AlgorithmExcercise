#include<iostream>
using namespace std;
int C[100], n, k;
void XuatKetQua()
{
	for (int i=1;i<=k;i++) cout<<C[i]<<"     ";
	cout<<"\n";
}
void Try(int i)
{
	for (int j=C[i-1]+1;j<=n-k+i;j++)
	{
		C[i]=j;
		if (i==k) XuatKetQua();
		else Try(i+1);
	}
}
int main()
{
	cout<<"Nhap n : ";
	cin>>n;
	cout<<"Nhap So Phan Tu Day Con : ";
	cin>>k;
	C[0]=0;
	Try(1);
}
