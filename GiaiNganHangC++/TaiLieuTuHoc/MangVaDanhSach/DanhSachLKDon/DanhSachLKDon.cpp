#include<iostream>
using namespace std;
struct sinhvien 
{
	char HoTen[30];
	int Diem;
};
struct Node
{
	sinhvien data;
	Node *next;
};
struct List
{
	Node *head, *tail;
};
void KhoiTao(List &d)
{
	d.head=d.tail=NULL;
}
int KTRong(List d)
{
	return(d.head==NULL);
}
void Nhap(sinhvien &x)
{
	cout<<"Nhap HoTen : ";
	cin>>x.HoTen;
	cout<<"Nhap Diem : ";
	cin>>x.Diem;	
}
void ThemDau(List &d,sinhvien x)
{
	Node *p= new Node;
	p->data=x;
	p->next=d.head;
	if (KTRong(d)) 
	{
		d.head=d.tail=p;
		return;
	}
	d.head=p;
}
void Xem(List d)
{
	Node *p=d.head;
	while(p!=NULL)
	{
		cout<<p->data.HoTen<<"\t"<<p->data.Diem<<"\n";
		p=p->next;		
	}	
}
void XoaDau(List &d)
{
	if (KTRong(d)) return;
	Node *p=d.head;
	d.head=p->next;
	delete p;
	if (d.head==NULL) d.tail=NULL;
}
void ThemCuoi(List &d,sinhvien x)
{
	Node *p= new Node;
	p->data=x;
	p->next=NULL;
	if (KTRong(d)) 
	{
	d.head=d.tail=p;
	return;
	}
	d.tail->next=p;
	d.tail=p;
}
void XoaCuoi(List &d)
{
	if (KTRong(d)) return;
	Node *p=d.head;
	if (p->next==NULL)
	{
		delete p;
		KhoiTao(d);
		return;		
	}
	Node *q= new Node;
	while (p->next!=NULL)
	{
		q=p;
		p=p->next;
	}
	q->next=NULL;
	d.tail=q;
	delete p;
}
void XoaDS(List &d)
{
	if (KTRong(d)) return;
	Node *p=d.head;
	while (d.head!=NULL)
	{
		p=p->next;
		delete d.head;
		d.head=p;
	}
	d.tail=NULL;
}
int Dem(List d)
{
	Node *p=d.head;
	int i=0;
	while (p!=NULL)
	{
		p=p->next;
		i++;
	}
	return i;
}
int main()
{
	List d; int t=1; char c; sinhvien x;
	while (t)
	{
	cout<<"0. Thoat\n";
	cout<<"1. Khoi Tao\n";
	cout<<"2. Them Dau\n";
	cout<<"3. Xem\n";
	cout<<"4. Xoa Dau\n";
	cout<<"5. Them Cuoi\n";
	cout<<"6. Xoa Cuoi\n";
	cout<<"7. Xoa Danh Sach\n";
	cout<<"8. Dem So Phan Tu\n";
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
			ThemDau(d,x);
			break;
		case '3' :
			Xem(d);
			break;
		case '4' :
			XoaDau(d);
			break;
		case '5' :
			Nhap(x);
			ThemCuoi(d,x);
			break;
		case '6' :
			XoaCuoi(d);
			break;
		case '7' : 
			XoaDS(d);
			break;
		case '8' :
			cout<<Dem(d)<<"\n";
			break;
	}
	}
}
