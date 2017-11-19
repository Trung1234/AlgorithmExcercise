#include<iostream>
#include<fstream>
using namespace std;
ifstream f1;
int A[100][100], N, M=0;
void LayDuLieu()
{
	f1.open("mtke.dat");
	f1>>N;
	for (int i=1;i<=N;i++)
		for (int j=1;j<=N;j++) f1>>A[i][j];
	f1.close();
}
void TinhSoCanh()
{
	for (int i=1;i<=N;i++)
		for (int j=i;j<=N;j++)
			if (A[i][j]==1) M++;	
}
void XuatKetQua()
{
	cout<<N<<"\t"<<M<<"\n";
	for (int i=1;i<=N;i++)
		for (int j=i;j<=N;j++)
			if (A[i][j]==1) cout<<i<<"\t"<<j<<"\n";
}
int main()
{
	LayDuLieu();
	TinhSoCanh();
	XuatKetQua();
}

