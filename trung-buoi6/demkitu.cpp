#include <iostream>
#include <fstream>
#include <math.h>
#include <string.h>
#include <stdio.h>
#include <map>
using namespace std;

int n;
float a[111];
int dem[111];
int ntest;
map<float,int> demMap;
map<float,int>::iterator ite;// con tro
void input(){
    scanf("%d",&n);
    
    for (int i=0;i<n;i++){
        scanf("%f",&a[i]);
    }
}

void solve(){
    for (int i=0;i<n;i++)
        demMap[ a[i] ]++;
    
    for (ite = demMap.begin();ite!= demMap.end();ite++)
        if ( ite->second > 0 )
            printf("%f co %d lan xuat hien\n",ite->first,ite->second);
}

int main(int argc, const char * argv[]) {
    freopen("input.txt","r",stdin);
    
    scanf("%d",&ntest);
    
    for (int itest=0;itest<ntest;itest++){
        input();
        solve();
    }
    
}
