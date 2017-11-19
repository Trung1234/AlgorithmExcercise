#include <iostream>
#include <fstream>
#include <math.h>
#include <string.h>
#include <stdio.h>
#include <algorithm>
#include <vector>

using namespace std;

int nlang, nduong;
int s[1111][1111];
int visited[1111];
int q[1111];


void input(){
	int a,b;
    scanf("%d %d",&nlang,&nduong);
    memset(s,0,sizeof(s));
    memset(visited,0,sizeof(visited));
    for (int i=0;i<nduong;i++){
       
        scanf("%d",&a,&b);
        s[a][b] = 1;
        s[b][a] = 1;
        
    }
}


void loang(int idx){
    // dan ca va nhac co canh
    int dau = -1;   // khoi tri queue
    int cuoi = 0;
  
    visited[idx] = 1; // danh dau diem bat dau
    q[0] = idx;      // cho diem xuat phat vao queue
    
    // bat dau loang ne
    while ( dau<cuoi ){
        dau++;
        int curr = q[dau];    // lay phan tu dau tien cua queue de loang ( pop )
        
        for (int nex =0;nex<nlang;nex++){  // di chuyen 4 huong
          
         
                if ( s[curr][nex] == 1 && visited[nex] == 0){
                    
                    cuoi++;
                    q[cuoi] = nex;      // cho toa do vua loang duoc vao trong queue ( push )
                    visited[nex] = 1; // danh dau da di qua day va ko duoc loang lai nua
                }
            
        }
    }

}

void solve(){
   
    int soVung = 0;
   
    
    for (int i=0;i<nlang;i++){
        
            if ( visited[i] == 0){    // neu no la dat thi loang
                loang(i);
                soVung++;            // dem so luong vung
        }
    }
    
    
    
    printf("%d\n",soVung);
    
  
}

int main(int argc, const char * argv[]) {
    freopen("loang2.txt","r",stdin);
    
    int ntest;
    
    scanf("%d",&ntest);
    
    for (int itest=0;itest<ntest;itest++){
        input();
        solve();
    }
}

