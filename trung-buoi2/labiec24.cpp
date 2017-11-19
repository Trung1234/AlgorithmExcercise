#include <iostream>
using namespace std;
int main(){
	int i,j;
	int n = 10, m = 10;
	cout<<"ta co bang cu chuong la "<<endl;
	
	for(i=1;i<=n;i++){
		for(j=1;j<=m;j++){
				cout<<i*j<<"\t";
		}
		cout<<"\n";
	}
	
	return 0;
}
