#include<iostream>
#include<fstream>
#include<math.h>
using namespace std;


int max(int a, int b){	
   
    if (a>b){
    	return a;
	}
	else if (a<b){
    	return b;
	}
	else{
		cout<<" 2 so bang nhau "<<endl;
		return 0;
	}
}
int main(){
	int a,b,max_number;
	cout<<"nhap vao 2 so a va b "<<endl;
	cin>>a>>b;
    max_number = max(a,b);
    if(max_number==0){
    	cout<<"khong co so lon nhat";
	}
	else{
		cout<<"so lan nhat la : "<<max_number;
	}
    
	return 0;
}

