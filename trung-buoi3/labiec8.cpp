#include <iostream>
using namespace std;
float tinhTongNghichDao(int n){
	float tong = 0;
	for(int i=1;i<=n;i++){
		tong = tong + (float)1.0/i;
	}
	return tong;
}
int main(){
	int n;
	cout<<"moi nhap vao n: "<<endl;
	cin>>n;
	float tong = tinhTongNghichDao(n);
	cout<<"tong  nghich dao la : "<<tong;
}
