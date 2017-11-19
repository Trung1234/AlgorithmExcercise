#include <iostream>
using namespace std;
int main(){
	int a,b;
	int n; 
	cout<<"nhap vao n: "<<endl;
	cin>>n;
	for(a=(n/2+1);a<n;a++){
		
		cout<<"ta co cap so"<<a<<" " <<n-a;
					
		cout<<"\n";
	}
	
	return 0;
}
