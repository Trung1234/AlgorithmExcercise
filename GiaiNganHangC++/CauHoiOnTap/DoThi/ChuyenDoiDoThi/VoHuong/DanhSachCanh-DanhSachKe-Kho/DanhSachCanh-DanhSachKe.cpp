#include<iostream>
#include<fstream>
using namespace std;
ifstream f1;
struct DanhSachDinh
{
	int DinhKe[100], SoDinhKe;
};
DanhSachDinh Dinh[100];
int A[100][100], N, M;
void KhoiDau()
{
	for (int i=1;i<=N;i++)
		Dinh[i].SoDinhKe =0;
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
		Dinh[i].SoDinhKe++;
		int p=Dinh[i].SoDinhKe;
		Dinh[i].DinhKe[p]=j;
		
		Dinh[j].SoDinhKe++;
		int q=Dinh[j].SoDinhKe;
		Dinh[j].DinhKe[q]=i;
		}
	f1.close();
}
void XuatKetQua()
{
	cout<<N<<"\n";
	for (int i=1;i<=N;i++)
	{
		for (int p=1;p<=Dinh[i].SoDinhKe;p++) cout<<Dinh[i].DinhKe[p]<<"      ";
		cout<<"\n";
	}
}
int main()
{
	KhoiDau();
	LayDuLieu();
	XuatKetQua();
}
