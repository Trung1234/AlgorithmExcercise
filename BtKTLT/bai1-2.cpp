
#include <stdio.h>



int n;
int a[100];

void inputN(){
	printf("moi nhap vao so phan tu mang: \n");
    scanf("%d",&n);
    if(n>100){
    	printf("ban da nhap sai, xin moi nhap lai \n");
        inputN();
    }
}
void input(){
	
    inputN();
    for (int i=0;i<n;i++)
        scanf("%d",&a[i]);
}
void bubbleSort()
{
	for (int i = 0; i < n - 1; i++)
		for (int j = n - 1; j > i; j--)
			if (a[j] < a[j - 1]){
				int temp = a[j];
				a[j] = a[j-1];
				a[j-1] = temp;	
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
	bubbleSort();
	printf("mang sau khi sap xep: \n");
    output();  
}
