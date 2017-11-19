#include <iostream>
#include <fstream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <map>
#include <vector>
#include <algorithm>
#include <queue>
 
using namespace std;
 
struct Diem{
    float x,y;
    int idx;
};
 
struct DoanThang{
    Diem a,b;
    float doDai;
};
 
Diem arrDiem[111];
vector<DoanThang> vect;
int nDiem;
int pre[11111];
 
void input(){
    scanf("%d",&nDiem);
   
    for (int i=0;i<nDiem;i++){
        Diem A;
        scanf("%f %f",&A.x,&A.y);
        A.idx = i;
        arrDiem[i] = A;
    }
}
 
float calDistance(Diem a,Diem b){
    float tx,ty;
    tx = a.x - b.x;
    ty = a.y - b.y;
    return sqrt(tx*tx+ty*ty);
}
 
bool cmp(DoanThang d1,DoanThang d2){
    if ( d1.doDai < d2.doDai )
        return true;
    return false;
}
 
int timgoc(int idx){
    if ( pre[idx] == idx )
        return idx;
    return pre[idx] = timgoc(pre[idx]);
}
 
void solve(){
    vect.clear();
    // de phan biet AB va BA la 1 doan thang duy nhat
    for (int i=0;i<nDiem;i++){
        for (int j=i+1;j<nDiem;j++){
            DoanThang temp;
            temp.a = arrDiem[i];
            temp.b = arrDiem[j];
           
            temp.doDai = calDistance(temp.a,temp.b);
            vect.push_back(temp);
        }
    }
   
    sort(vect.begin(),vect.end(),cmp);
   
    // khoi tri
    for (int i=0;i<nDiem;i++)
        pre[i] = i;
   
    int len = vect.size();
    float sum = 0;
    for (int i=0;i<len;i++){
        DoanThang cur = vect[i];
        Diem a = cur.a;
        Diem b = cur.b;
       
        int v1 = timgoc(a.idx);
        int v2 = timgoc(b.idx);
       
        if ( v1 == v2 )
            continue;
       
        pre[v1] = v2;
        sum = sum + cur.doDai;
        printf("%c %c\n",a.idx+'A',b.idx+'A');
    }
   
    printf("%f\n",sum);
    printf("\n");
}
 
int main()
{
    freopen("test.txt","r",stdin);
   
    int ntest;
    scanf("%d",&ntest);
   
    for (int itest=0;itest<ntest;itest++){
        input();
        solve();
    }
}
    
