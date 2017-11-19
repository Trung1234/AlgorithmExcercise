#include<iostream>
using namespace std;
bool isLeepYear(int year){
	if(year%4 != 0){
		return false;
	}
	if(year%400 == 0){
		return true;
	}
	if(year%100 == 0){
		return false;
	}
	return true;
}
int main() {

	int dem;
	for(int i=0;i<2017;i++){
		
		if(isLeepYear(i)){
			cout<<" "<<i<<"\t";
			dem++;
		}
	}
	cout<<dem;
}
