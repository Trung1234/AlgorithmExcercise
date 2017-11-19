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
struct Queue
{
	Node *Front,*Rear;
};
void KhoiTao(Queue &d)
{
	d.Front=d.Rear=NULL;
}
int KTRong(Queue d)
{
	return(d.Front==NULL);
}
void Nhap(sinhvien &x)
{
	cout<<"Nhap Ho Ten : ";
	cin>>x.HoTen;
	cout<<"Nhap Diem : ";
	cin>>x.Diem;
}
void Them(Queue &d,sinhvien x)
{
	Node *p = new Node;
	p->data=x;p->next=d.Front;
	if (KTRong(d))
	{
		d.Front=d.Rear=p;
		return;
	}
	d.Front=p;
}
void Xem(Queue d)
{
	if (KTRong(d)) return;
	Node *p=d.Front;
	while(p!=NULL)
	{
		cout<<p->data.HoTen<<"\t"<<p->data.Diem<<"\n";
		p=p->next;
	}
}
void LayRa(Queue &d)
{
	if (KTRong(d)) return;
	Node *p=d.Front,*q;
	if(p->next==NULL)
	{	
		cout<<p->data.HoTen<<"\t"<<p->data.Diem<<"\n";
		delete p;
		d.Front=d.Rear=NULL;
		return;
	}
	while (p->next!=NULL)
	{
		q=p;
		p=p->next;
	}
	q->next=NULL;
	d.Rear=q;
	cout<<p->data.HoTen<<"\t"<<p->data.Diem<<"\n";
	delete p;
}
int main()
{
	Queue d; int t=1; char c; sinhvien x;
	while (t)
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
