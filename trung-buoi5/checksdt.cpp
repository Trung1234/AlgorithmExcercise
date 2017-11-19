#include<iostream>
#include<string.h>
using namespace std;
char ch[256];
int len,n;
int kiemtraSdt(char s1[]){
	len = strlen(s1);
	if(len!=10 || len != 11) return 0;
	if(s1[0]!='0') return 0;
	for(int i=0;i<len;i++)
		if(!(s1[i]>='0'&&s1[i]<='9'))
			return 0;
	return 1;
}

int main(){
	freopen("in.txt","r",stdin);
	cin>>ch;
	cin>>n;
	for(int i=0;i<n;i++){
		cout<<kiemtraSdt(ch)<<endl;
	}
	
	
}
