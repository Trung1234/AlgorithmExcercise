#include <iostream>
#include <fstream>
#include <math.h>
#include <string.h>
#include <stdio.h>
#include <algorithm>
 
using namespace std;
 
struct toado{
    int hang;
    int cot;
};
 
toado hg[8]={-1,0
            ,-1,1
            ,0,1
            ,1,1
            ,1,0
            ,1,-1
            ,0,-1
            ,-1,-1};
 
char s[1111][1111];
int nhang,ncot;
 
void input(){
    scanf("%d %d",&nhang,&ncot);
   
    for (int i=0;i<nhang;i++)
        scanf("%s",&s[i]);
}
 
bool isInMatrix(toado x){
    if ( x.hang < 0 || x.hang >= nhang )
        return false;
    if ( x.cot < 0 || x.cot >= ncot )
        return false;
    return true;
}
 
void solve(){
    for (int i=0;i<nhang;i++){
        for (int j=0;j<ncot;j++){
            if ( s[i][j] == '*' ){
                // di chuyen 8 huong
                for (int idx=0;idx < 8;idx++){
                    toado cur;
                    cur.hang = i + hg[idx].hang;
                    cur.cot  = j  + hg[idx].cot;
                   
                    if (isInMatrix(cur) == true && s[ cur.hang ][ cur.cot ] != '*'){
                        s[ cur.hang ][ cur.cot ]++;
                    }
                }
            }
        }
    }
}
 
void output(){
    for (int i=0;i<nhang;i++)
        printf("%s\n",s[i]);
    printf("\n");
}
 
int main(int argc, const char * argv[]) {
    freopen("input.txt","r",stdin);
   
    int ntest;
   
    scanf("%d",&ntest);
   
    for (int itest=0;itest<ntest;itest++){
        input();
        solve();
        output();
    }
 
}
