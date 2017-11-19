#include<iostream>
using namespace std;
struct sinhvien
{
	char HoTen[30];
	int Diem;
};
struct NODE
{
	sinhvien data;
	NODE *next;
};
struct stack
{
	NODE *top;
};
void KhoiTao(stack &d)
{
	d.top=NULL;
}
int KTRong(stack d)
{
	return(d.top==NULL);
}
void Nhap(sinhvien &x)
{
	cout<<"Nhap HoTen : ";
	cin>>x.HoTen;
	cout<<"Nhap Diem : ";
	cin>>x.Diem;
}
void Them(stack &d,sinhvien x)
{
	NODE *p= new NODE;
	p->data=x;
	if (KTRong(d)) 
	{
		p->next=NULL;
		d.top=p;
		return;
	}
	p->next=d.top;
	d.top=p;
}
void Xem (stack d)
{
	if (KTRong(d)) return;
	NODE *p=d.top;
	while(p!=NULL)
	{
		cout<<p->data.HoTen<<"\t"<<p->data.Diem<<"\n";
		p=p->next;
	}
}
void LayRa (stack &d)
{
	if (KTRong(d)) return;
	NODE *p=d.top;
	cout<<p->data.HoTen<<"\t"<<p->data.Diem<<"\n";
	d.top=p->next;
	delete p;	
}
int main()
{
	stack d; int t=1; char c; sinhvien x;
	while(t)
	{
	cout<<"0. Thoat\n";
	cout<<"1. Khoi Tao\n";
	cout<<"2. Them\n";
	cout<<"3. Xem\n";
	cout<<"4. Lay Ra\n";
	cin>>c;
	switch(c)
	{
		case '0' :
			t=0;
			break;
		case '1' :
			KhoiTao(d);
			break;
		case '2' :
			Nhap(x);
			Them(d,x);
			break;
		case '3' :
			Xem(d);
			break;
		case '4' :
			LayRa(d);
			break;
	}
	}
}
