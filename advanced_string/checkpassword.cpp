#include <iostream>
#include <fstream>
#include <math.h>
#include <string.h>
#include <stdio.h>

using namespace std;
char a[1111111];
int ntest;
int checkPasswordStrength(char s[]){
  		int len = strlen(s);
  		int demGach = 0;demthuong = 0,demhoa  = 0, demso = 0,demktdb = 0;
  		if(len<6) return -1;
  		for(int i=0;i<len;i++)
  			if(s[i]>='a'&&s[i]<='z')
  				demthuong = 1
  			else if(s[i]>='A'&&s[i]<='Z')
  				demhoa = 1;
			else if(s[i]>='0'&&s[i]<='9')
  				demso =1 ;
		
  			else demktdb=1;
  		int demLoai  =demthuong + demhoa + demso +demktdb;	
  		if(demloai == 1) return 0;
		if(demloai==2) return 1;
		if(len>10&& return 2;  	
}
void input(){
	scanf("%s",&a);
}
voif solve(){
	printf("%d \n ",checkPasswordStrength(a))
}
int main(){
	
	
}
