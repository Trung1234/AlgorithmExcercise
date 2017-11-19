#include<iostream>
#include<fstream>
#include<string>
#include<stdlib.h>
using namespace std;
ifstream f1; ofstream f2;
int N, M=0, A[100][100];
void KhoiDau()
{
	for (int i=1;i<=N;i++)
		for (int j=1;j<=N;j++) A[i][j]=0;
}
string Tu[30]; int SoTu;
void TachTu(string x)
{
	int L=x.length();
	x[L]=' ';
	string s="";
	for (int k=0;k<=L;k++)
		if (x[k]!=' ') 
		{
			s=s+x[k];
			if (x[k+1]==' ') 
			{
				SoTu++;
				Tu[SoTu]=s;
				s="";
			}
		}
}
void XuLyXau(string x,int i)
{
	TachTu(x);
	for (int k=1;k<=SoTu;k++)
	{
		int j=atoi(Tu[k].c_str());
		if (j>i) 
		{
			f2<<i<<"\t"<<j<<"\n";
			M++;
		}
	}
	SoTu=0;
}
void LayDuLieu()
{
	f1.open("dske.dat");
	f1>>N;
	char x[255];
	f1.getline(x,255);
	for (int i=1;i<=N;i++)
		{
			f1.getline(x,255);
			XuLyXau(x,i);
		}
	f1.close();
}
int main()
{
	KhoiDau();
	f2.open("dscanh.dat");
	f2<<"...\n";
	LayDuLieu();
	f2.seekp(0);
	f2<<N<<"\t"<<M;
	f2.close();
}
