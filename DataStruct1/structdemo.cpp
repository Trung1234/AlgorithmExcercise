#include <iostream>
#include <fstream>
#include <math.h>
#include <string.h>
#include <stdio.h>


using namespace std;
 int n;
struct sinhvien{
	char name[11];
	int chuyencan;
	int coso;
	int chuyennganh;
};
sinhvien s[111];
void input(){
	 for(int i=1;i<=n;i++){
	 
    	gets(s[i].name);
    	scanf("%d %d %d \n",&s[i].chuyencan,&s[i].coso,&s[i].chuyennganh);
	}
}
void solve(){
	for(int i=1;i<=n;i++){
//    	printf("ten cua sinh vien %s \n",s[i].name);
//    	printf("%d %d %d \n",s[i].chuyencan,s[i].coso,s[i].chuyennganh);
		if((s[i].chuyencan+s[i].coso+s[i].chuyennganh) == 30)
			printf("co gau ");
		else  printf("dang fa ");
		     	
	}
}
int main(int argc, const char * argv[]) {
    freopen("sinhvien.txt","r",stdin);
   
    scanf("%d",&n);
    //input
    input();
   	solve();
}
