#include<iostream>
using namespace std;
int cao ,rong, kc;
void doPrint(char c,int num){
	for(int i=0;i<num;i++){
		cout<<c;
	}
}
int main(){
	
	cout<<"nhap vao chieu co ,rong, khoang cach"<<endl;
	cin>>cao>>rong>>kc;
	// ve cai dinh
	cout<<"*";
	doPrint(' ',rong-2);
	cout<<"*";
	cout<<"\n";
	return 0;
}
