#include<iostream>
#include<fstream>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

using namespace std;

int main()
{
	int n,sz;
	
	scanf("%d %d",&n,&sz);
	
	for (int i=1;i<=sz;i++){
		// chu V dau
		for (int j=1;j<2*sz;j++){
			if (i == j || i + j == 2*sz )
				printf("*");
			else
				printf(" ");	
		}
		
		// ve them n-1 chu V thieu
		for (int k=1;k<n;k++){
			// chu V sau ( thieu 1 dau sao )
			for (int j=2;j<2*sz;j++){
				if (i == j || i + j == 2*sz )
					printf("*");
				else
					printf(" ");
			}	
		}
		
		printf("\n");
	}	
	
	
    return 0;
}

