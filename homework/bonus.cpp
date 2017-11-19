#include <iostream>
#include <fstream>
#include <math.h>
#include <string.h>
#include <stdio.h>
#include <algorithm>

using namespace std;

int n,a,b;
int s[1111];

void input(){
    scanf("%d",&n);
    scanf("%d",&a);
    scanf("%d",&b);
    for (int i=1;i<=n;i++)
        scanf("%d",&s[i]);
}

void search(){
	bool exist = false;
    for (int i=1;i<=n;i++){
	
        if ( s[i] >= a && s[i] <= b ){
        	exist = true;
            printf("%d ",i);
  		}
  		
		   	
   }
   if(exist == false){
   	    printf("-1");	 
   }
   
    
}




int main(int argc, const char * argv[]) {
    freopen("search.txt","r",stdin);
    
    int ntest;
    
    scanf("%d",&ntest);
    
    for (int itest=1;itest<=ntest;itest++){
        input();
        search();
        printf("\n");
    }
    
}
