#include<iostream>
#define FREE 1
#define USED 0
using namespace std;
int C[100], B[100], n;
void XuatKetQua()
{
	for (int i=1;i<=n;i++) cout<<C[i]<<"    ";
	cout<<"\n";
}
void Try(int i)
{
	for (int j=1;j<=n;j++)
	if (B[j]==FREE) 
	{
		C[i]=j;
		B[j]=USED;
		if (i==n) XuatKetQua();
		else Try(i+1);
		B[j]=FREE;
	}
}
void KhoiDau()
{
	for (int j=1;j<=n;j++) B[j]=FREE;
}
int main()
{
	cout<<"Nhap n : ";
	cin>>n;
	KhoiDau();
	Try(1);	
}
