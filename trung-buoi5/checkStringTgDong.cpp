#include<iostream>
#include<string.h>
using namespace std;
char s1[256],s2[26];
int len,n;
int dem1[256],dem2[256];
int kiemtraSdt(char s1[],char s2[]){
	len = strlen(s1);
//	
//	for(int i=0;i<len;i++){
//		if(s1[i]!=s2[i]) return 0;
//	}
	if(strlen(s1)!=strlen(s2)){return 0;}
	for(int i=0;i<len;i++){
	
		dem1[s1[i]]++;
		dem2[s2[i]]++;
}
	for(int i=0;i<256;i++)
		if(dem1[i]!=dem2[i])
			return 0;	
	return 1;
}
void solve(){
	
	cin>>s1;
	cin>>s2;
	cout<<kiemtraSdt(s1,s2)<<endl;
}
int main(){
	freopen("input.txt","r",stdin);
	memset(dem1,0,sizeof(dem1));
	memset(dem2,0,sizeof(dem2));
	cin>>n;
	for(int i=0;i<n;i++){
		solve();
	}
	
	
}
