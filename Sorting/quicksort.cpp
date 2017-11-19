#include<iostream>
using namespace std;
int Partition(float a[], int l, int h)
{
	int i= l-1;
	int x = a[h];
	for(int j=l;j<h;j++){
		if(a[j]<=x){
			i++;
			swap(a[i],a[j]);
		}
	} 
	swap(a[i+1],a[h]);
	return i+1;
}
void Quicksort(float a[], int l, int h)
{
	if(l>=h) return ;
	int p = Partition(a,l,h);
	Quicksort(a,l,p-1);
	Quicksort(a,p+1,h);	
	
	
}
int main()
{
	float a[50];
	int N;
	cout<< " Nhap N"<< " ";
	cin>> N;
	for( int i=0 ;i<N; i++)
	{
		cout<< " nhap a " << i+ 1 << " ";
		cin>>a[i];
	}
//
	Quicksort(a,0, N-1);
//	Heap(a,N);
	for(int i=0 ; i<N; i++)
	{
		cout<< a[i] << " ";
	}
}
