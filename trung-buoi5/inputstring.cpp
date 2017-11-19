#include<iostream>
#include<string.h>
using namespace std;


int main(){
	char ch[111];
	int n;
	cin>>ch;
//	cout<<"nhap vao so n"; cin>>n;
//	for(int i=1;i<=n;i++){
	int len = strlen(ch);
        for (int i=0;i<len;i++)
            cout<<ch[i];
        cout<<endl;
//	}
}
