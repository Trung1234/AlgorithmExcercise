#include<iostream>
#include<list>
using namespace std;
int main(){
	list<int> mylist; // khai bao list;
	// them phan tu
	for(int i=1;i<10;i=i+2){
		mylist.push_back(i);
	};
	cout<<"fdff        "<<mylist.back();
	
}
