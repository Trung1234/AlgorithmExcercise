#include<iostream>
#include<fstream>
using namespace std;
ifstream f1;
int A[100][100], N;
void LayDuLieu()
{
	f1.open("mtke.dat");
	f1>>N;
	for (int i=1;i<=N;i++)
		for (int j=1;j<=N;j++) f1>>A[i][j];
	f1.close();
}
void InKetQua()
{
	cout<<N<<"\n";
	for (int i=1;i<=N;i++)
		{
		for (int j=1;j<=N;j++)
			if (A[i][j]==1) cout<<j<<"\t";
		cout<<"\n";
		}
}
int main()
{
	LayDuLieu();
	InKetQua();
}
