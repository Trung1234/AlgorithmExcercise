#include<iostream>
#include<fstream>
using namespace std;
ifstream f1;
int A[100][100], N, M;
void KhoiDau()
{
	for (int i=1;i<=N;i++)
		for (int j=1;j<=N;j++) A[i][j]=0;
}
void LayDuLieu()
{
	f1.open("dscanh.dat");
	f1>>N>>M;
	KhoiDau();
	int i,j;
	for (int k=1;k<=M;k++)
		{
		f1>>i>>j;
		A[i][j]=A[j][i]=1;
		}
	f1.close();
}
void XuatKetQua()
{
	cout<<N<<"\n";
	for (int i=1;i<=N;i++)
		{
		for (int j=1;j<=N;j++) cout<<A[i][j]<<"  ";
		cout<<"\n";
		}
}
int main()
{
	LayDuLieu();
	XuatKetQua();
}
