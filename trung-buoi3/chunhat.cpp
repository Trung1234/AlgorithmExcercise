#include <iostream>
#include <fstream>
#include <math.h>
#include <string.h>
#include <stdio.h>
int w,h;
void inFullLine(){
	 for (int j=0;j<w;j++){
        printf("*");
    }
    printf("\n");
}
int main(int argc, const char * argv[]) {
    //freopen("input.txt","r",stdin);
    
    
    scanf("%d %d",&w,&h);
    inFullLine();
   
    
    for (int i=0;i<h-2;i++){
        printf("*");
        for (int j=0;j<w-2;j++){
            printf(" ");
        }
        printf("*");
        printf("\n");
    }
    inFullLine();
    
    return 0;
}
