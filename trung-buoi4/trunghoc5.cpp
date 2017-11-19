#include <iostream>
#include <math.h>
using namespace std;
int nhang,ncot;
int a[111][111];
int ntest, tong=0;
//int max=0;
bool checkSNT(int num){
	if(num<2){
		return false;
	}
	else if(num==2){
		return true;
	}
	else{
		for(int i=3;i<sqrt(num);i++){
			if(num%i==0){
				return false;
			}
			
		}
	}
	return true;
}


void input(){
	cout<<"moi nhap vao so hang va cot cua ma tran \n";
    cin>>nhang>>ncot;

    	for (int i=0;i<nhang;i++)
        	for (int j=0;j<ncot;j++)
            	cin>>a[i][j];
	
}

//void output(){
//    for (int i=0;i<nhang;i++){
//        for (int j=0;j<ncot;j++)
//            cout<<a[i][j];
//        cout<<"\n";
//    }
//    
//}
void solve(){
	int max = 0;
	for (int i=0;i<nhang;i++){
        for (int j=0;j<ncot;j++){
        	if(checkSNT(a[i][j])==true){
				 
				if(a[i][j]> max){
					max = a[i][j];
				}
			}
			
		}	
	}
	cout<<" so nt ln la "<<max<<endl;
}
int main(int argc, const char * argv[]) {
    
    input();
//    output();
    solve();
    
}
