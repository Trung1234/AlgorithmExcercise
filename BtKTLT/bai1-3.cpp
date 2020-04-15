
#include <stdio.h>


int n;
int a[100];

void inputN(){
	printf("moi nhap vao so phan tu mang: \n");
    scanf("%d",&n);
    if(n>45){
    	printf("ban da nhap sai, xin moi nhap lai \n");
        inputN();
    }
}
void input(){
	
    inputN();
    for (int i=0;i<n;i++)
        scanf("%d",&a[i]);
}

void selectionSort()
{
	for (int i = 0; i < n - 1; i++)
	{
		int min = i;
		for (int j = i + 1; j < n; j++)
		{
			if (a[min] > a[j])
			min = j;
		}
		if (i != min){
			int temp = a[i];
			a[i] = a[min];
			a[min] = temp;
		}	
	}
}
void output(){
    for (int i=0;i<n;i++)
        printf("%d ",a[i]);
    printf("\n");
}

int main(int argc, const char * argv[]) {

    input();
	printf("mang truoc khi sap xep: \n");
	output();
	selectionSort();
	printf("mang sau khi sap xep: \n");
    output();   
}
