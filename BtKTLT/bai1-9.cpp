
#include <stdio.h>


int n, x;
int a[100];
void inputN(){
	printf("moi nhap vao so phan tu mang: \n");
    scanf("%d",&n);
    if(n>60){
    	printf("ban da nhap sai, xin moi nhap lai \n");
        inputN();
    }
}
void input(){
	
    inputN();
    for (int i=0;i<n;i++)
        scanf("%d",&a[i]);
}
void insertionSort()
{
	for (int i = 1; i < n; i++)
	{
		int x = a[i];
		int j = i;
		while (j > 0 && a[j - 1] > x)
		{
			a[j] = a[j - 1];
			j--;
		}
		a[j] = x;
	}
}
void output(){
    for (int i=0;i<n;i++)
        printf("%d ",a[i]);
    printf("\n");
}
void findX(){
	int x;
	for (int i=0;i<n;i++){
        if(a[i] % 5 == 0){
        	x = a[i];
        	break;
        }
	}
	printf("\n");
	printf("so dau tien chia het cho 5 la = %d ",x);
}

int main(int argc, const char * argv[]) {
	
	input();
	printf("mang truoc khi sap xep: \n");
	output();
	insertionSort();
	printf("mang sau khi sap xep: \n");
    output();
    findX();
}

