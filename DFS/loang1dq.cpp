#include <iostream>
#include <fstream>
#include <math.h>
#include <string.h>
#include <stdio.h>
#include <algorithm>
#include <vector>

using namespace std;

struct toado{
    int hang;
    int cot;
};

toado hg[4]={-1,0
    ,0,1
    ,1,0
    ,0,-1};

int nhang,ncot;
int s[1111][1111];
int visited[1111][1111];
toado q[111111];
int dem;

void input(){
    scanf("%d %d",&nhang,&ncot);
    
    for (int i=0;i<nhang;i++){
        for (int j=0;j<ncot;j++){
            scanf("%d",&s[i][j]);
        }
    }
}

bool isInMatrix(toado t){
    if ( t.hang < 0 || t.hang >= nhang )
        return false;
    if ( t.cot < 0 || t.cot >= ncot )
        return false;
    return true;
}

// tra ra toa do moi khi di chuyen tu toa do cu theo huong idx
toado doMove(toado cu,int idx){
    toado moi;
    
    moi.hang = cu.hang + hg[idx].hang;
    moi.cot = cu.cot + hg[idx].cot;
    
    return moi;
}
//
//int loang(int hang,int cot){
//    // dan ca va nhac co canh
//    int dau = -1;   // khoi tri queue
//    int cuoi = 0;
//    toado st;
//    st.hang = hang;
//    st.cot = cot;   // luu diem bat dau
//    visited[hang][cot] = 1; // danh dau diem bat dau
//    q[0] = st;      // cho diem xuat phat vao queue
//    
//    // bat dau loang ne
//    while ( dau<cuoi ){
//        dau++;
//        toado curr = q[dau];    // lay phan tu dau tien cua queue de loang ( pop )
//        
//        for (int i=0;i<4;i++){  // di chuyen 4 huong
//            toado nex = doMove(curr,i);     // di chuyen tu toa do curr sang toa do nex
//            
//            if ( isInMatrix(nex) ){ // dam bao di chuyen trong ma tran
//                if ( s[nex.hang][nex.cot] == 0 && visited[nex.hang][nex.cot] == 0){
//                    // dam bao loang theo dung ki tu va diem do chua tung di qua
//                    cuoi++;
//                    q[cuoi] = nex;      // cho toa do vua loang duoc vao trong queue ( push )
//                    visited[nex.hang][nex.cot] = 1; // danh dau da di qua day va ko duoc loang lai nua
//                }
//            }
//        }
//    }
//    
//    return cuoi+1;  // tra ra size cua queue va cung la so phan tu trong vung dang xet
//}

void dequy(int hang,int cot){
    dem++;
    visited[hang][cot] = 1;
    toado cur;
    cur.hang = hang;
    cur.cot = cot;
    // gan toa do hien tai
    for (int idx=0;idx<4;idx++){
        toado nex = doMove(cur,idx);
        // di chuyen sang 4 huong
        if ( isInMatrix(nex) && s[nex.hang][nex.cot] == 0 && visited[nex.hang][nex.cot] == 0){
            dequy(nex.hang, nex.cot);
        }
    }
}

void solve(){
    memset(visited, 0, sizeof(visited));
    int demSoVung = 0;
    vector<int> vect;   // la 1 mang dong ko can khai bao truoc so luong phan tu
    
    for (int i=0;i<nhang;i++){
        for (int j=0;j<ncot;j++){
            if ( s[i][j] == 0 && visited[i][j] == 0){    // neu no la dat thi loang
                dem = 0;
                dequy(i,j);
                demSoVung++;            // dem so luong vung
                vect.push_back(dem);     // day dien tich cua vung vao 1 mang tam
            }
        }
    }
    
    
    
    printf("%d\n",demSoVung);
    
    // sap xep vector
    sort(vect.begin(),vect.end());      // khac cach dung con tro so voi sort array
    // luu y plz
    
    // vect.size tuong duong voi n
    for (int i=0;i<vect.size();i++){
        printf("%d ",vect[i]);
    }
    printf("\n");
}

int main(int argc, const char * argv[]) {
    freopen("input.txt","r",stdin);
    
    int ntest;
    
    scanf("%d",&ntest);
    
    for (int itest=0;itest<ntest;itest++){
        input();
        solve();
    }
}
