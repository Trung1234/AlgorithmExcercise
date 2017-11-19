#include<iostream>
using namespace std;
void Bubllesort(float a[], int N)
{
	for(int i=0; i<N; i++)
	{
		for (int j=0; j<N-i-1; j++)
		{
			if( a[j+1] < a [ j])
			{
				swap(a[j+1], a[j]);
			}
		}
	}
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
//	Selectionsort(a,N);
//	Insertsort(a,N);
	Bubllesort(a,N);
//	Mergesort(a,N);
	//Quicksort(a,-1, N-1);
//	Heap(a,N);
	for(int i=0 ; i<N; i++)
	{
		cout<< a[i] << " ";
	}
}
