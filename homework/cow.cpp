#include <iostream>
#include <fstream>
#include <math.h>
#include <string.h>
#include <stdio.h>
#include <algorithm>

using namespace std;

int nchuong,nbo;
int s[100002];

void input(){
    cin>>nchuong>>nbo;
    
    for (int i=0;i<nchuong;i++)
        cin>>s[i];
}

int result(int num){
    // num la khoang cach toi thieu giua 2 con bo lien tiep
    int lastCow = s[0];   // toa do tha? con bo dau tien
    int dem = 1;          // dem so bo duoc nem vao chuong
    
    for (int i=0;i<nchuong;i++){
        int distance= s[i] - lastCow;
        // tinh khoang cach tu chuong dang xet den cai chuong duoc chon moi nhat
        
        if ( distance >= num ){
            // neu khoang cach giua 2 chuong ma >= khoang cach toi thieu
            lastCow = s[i];     // nem con bo vao cai chuong nay
            dem++;              // dem so bo duoc nem vao chuong
            
            if ( dem == nbo )   // khi ma nem duoc du so bo duoc giao thi la ket qua
                return dem;
        }
    }

    return 0;
}

void search(){
    for (int i=nchuong;i>0;i--){
        // tim kiem tat ca cac ket qua tu to nhat den be nhat
//       
		cout<<result(i);
        break;	
    }
}



void solve(){
    sort(s,s+nchuong);    // sort toa do cac chuong
    
    search();
  
}

int main() {
    freopen("cow.txt","r",stdin);
    
    int ntest;
    
    cin>>ntest;
    
    for (int itest=0;itest<ntest;itest++){
        input();
        solve();
    }
   
}
