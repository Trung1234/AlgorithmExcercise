#include<iostream>
using namespace std;
int B[100], n;
void XuatKetQua()
{
	for (int i=1;i<=n;i++) cout<<B[i]<<"    ";
	cout<<"\n";
}
void Try(int i)
{
	for (int j=0;j<=1;j++)
	{
		B[i]=j;
		if (i==n) XuatKetQua();
		else Try(i+1);
	}
}
int main()
{
	cout<<"Nhap n : ";
	cin>>n;
	Try(1);	
}
