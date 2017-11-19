#include <iostream>
using namespace std;
int main(){
	int i,j,a,b;
	int ucln,bcnn;
	cin>>a>>b;
	for(i=0;i<a*b;i++){
		if(i%a==0&&i%b==0){
			bcnn = i;
		}
		if(a%i==0&&b%i==0){
			ucln=i;
		}
	}
	cout<<"uoc chung lon nhat la "<<ucln<<endl;
	cout<<"boi chung  nho nhat la "<<bcnn<<endl;
	return 0;
}
