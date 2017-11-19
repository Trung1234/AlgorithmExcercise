#include<iostream>
#include<string.h>
#include <cstring>
using namespace std;


int main(){
	string string1, string2;
	char s1[111],s2[111];
	int n;
	cin>>s1>>s2;
	int ret = strcmp(s1, s2);
	if(ret!=0){
		cout<<"2 chuoi khac nhau : 0 ";
	}
	else{
		cout<<"2 chuoi giong nhau : 1 ";	
		
	}


}
