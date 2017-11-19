#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;
struct toado{
	int hang;
	int cot;
};
toado hg[4] = {0,-1
				,1,0
				,0,1
				,-1,0};
toado s1,s2;
int n;
void input(){
	cin>>s1.hang>>s1.cot;
	
}			
void solve(){
	int idx;
	cin>>n;
	cout<<s1.hang<<s1.cot<<"\n";
	for(int i=0; i<n;i++){
		cin>>idx;
		s2.hang = s1.hang + hg[idx].hang;
		s2.cot = s1.cot + hg[idx].cot;
		cout<<s2.hang<<s2.cot<<"\n";
		s1 = s2;
	}
}	
int main(){
	freopen("demosimu.txt","r",stdin);
    
    int ntest;
    cin>>ntest;
    for (int itest=0;itest<ntest;itest++){
        input();
        solve();
    }


}
