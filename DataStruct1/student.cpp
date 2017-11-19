#include <iostream>
#include <fstream>
#include <math.h>
#include <string.h>
#include <stdio.h>


using namespace std;
 
struct sinhvien{
	char name[11];
	int diem[3];
};
int n;
sinhvien s[111];
int idx, maxx;
void input(){
	scanf("%d \n",&n);
	 for(int i=0;i<n;i++){
    	gets(s[i].name);
    	for(int j=0;j<3;j++)
    		scanf("%d",&s[i].diem[j]);
    	scanf("\n");	
	}
}
void solve(){
	idx = 0;
	maxx = 0;
	for(int i=0;i<n;i++){
		int total = 0;
		for(int j=0;j<3;j++)
			total = total + s[i].diem[j];
		if(total > maxx){
			maxx = total;
			idx = i;
		}	
	}
}
void output(){
	printf("Name: %s \n",s[idx].name);
	printf("Total point: %d",maxx);
}
int main(int argc, const char * argv[]) {
    freopen("student.txt","r",stdin);
    int ntest;
    scanf("%d",&ntest);	
    for(int itest=0;itest<ntest;itest++)
    	input();
   		solve();
   		output();
}
