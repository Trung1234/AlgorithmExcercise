#include <iostream>
#include <math.h>
using namespace std;
int n;
int space1 ;
int space2 ;
void doPrint(char c,int num){
	for(int i=0;i<num;i++){
		cout<<c;
	}
}
void draw(){
	doPrint(' ', space1);
	cout<<"*";
	doPrint(' ', space2);
	cout<<"*";
	cout<<"\n";
}
int main(){
	cout<<"nhap vao so n:"<<endl;
	cin>>n;
	space1 = 0;
	space2 = n - 2;
	for(int i=0;i<n;i++){
		if(i == n/2){
			doPrint(' ',space1);
			cout<<"*";
			cout<<"\n";
		}
		else
			draw();
		if(i < n/2){
			space1 = space1 + 1;
			space2 = space2 - 2;
		}
		else{
			space1 = space1 - 1;
			space2 = space2 + 2;
		}
		
		
	}

	return 0;
}
