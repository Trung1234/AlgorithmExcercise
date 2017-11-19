#include <iostream>
#include <fstream>
#include <math.h>
#include <string.h>
#include <stdio.h>
#include <algorithm>
#include <vector>

using namespace std;

int nlang,nduong;
int s[1111][1111];
int pre[1111];
int visited[1111];
int q[1111111];
int level[111111];
int kt;

void input(){
    int a,b;
    
    scanf("%d %d",&nlang,&nduong);
    
    for (int i=0;i<nduong;i++){
        scanf("%d %d",&a,&b);
        
        s[a][b] = 1;
        s[b][a] = 1;
    }
}

int loang(int bd){
    int dau = -1;
    int cuoi = 0;
    
    visited[bd] = 1;
    level[bd] = 1;
    q[0] = bd;
    
    while ( dau < cuoi ){
        dau++;
        int curr = q[dau];
        
        for (int nex=1;nex<=nlang;nex++){
            if ( s[curr][nex] == 1 && visited[nex] == 0 ){
                cuoi++;
                q[cuoi] = nex;      // psuh vao queue
                visited[nex] = 1;   // danh dau da di qua
                pre[nex] = curr;    // danh dau quan he cha-con  ( giay khai sinh )
                level[nex] = level[curr] + 1;   // danh dau level
            }
        }
    }
    
    // thi thang o cuoi queue cung chinh la thang xa nhat
    // kt = q[cuoi];
    return q[cuoi];
}

void induong(int idx){
    if ( pre[idx] == -1 ){  // may co bo ko ?
        printf("%d",idx);   // tao cha may bi mo coi
        return;
    }
    induong(pre[idx]);      // tao co bo nay con cho
    printf(" %d",idx);
}

void induongVer2(){
    vector<int> vect;
    int idx = kt;
    while ( pre[idx] != -1 ){
        vect.push_back(idx);        // push thang hien tai
        idx = pre[idx];             // gan thang bo moi
    }
    vect.push_back(idx);            // gan thang to tien
    
    reverse(vect.begin(),vect.end());   // dao nguoc array
    
    for (int i=0;i<vect.size();i++)
        printf("%d ",vect[i]);
    printf("\n");
}

void solve(){
    for (int i=1;i<=nlang;i++)
        pre[i] = -1;            // khoi tri thang nao cung la bo het
    
    kt = loang(1);
    
    printf("%d\n",level[kt]);   // in chieu dai duong di
    
    // in cai duong day ra ho tao cai
    // C1
//    induong(kt);
//    printf("\n");
    
    // C2
    induongVer2();
}

void reset(){
    memset(s,0,sizeof(s));
    memset(visited,0,sizeof(visited));
    memset(level,0,sizeof(level));
}

int main(int argc, const char * argv[]) {
    freopen("input.txt","r",stdin);
    
    int ntest;
    
    scanf("%d",&ntest);
    
    for (int itest=0;itest<ntest;itest++){
        input();
        solve();
        reset();
    }
}
