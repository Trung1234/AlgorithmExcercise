#include <iostream>
#include <fstream>
#include <math.h>
#include <string.h>
#include <stdio.h>
#include <algorithm>
#include <vector>

using namespace std;

int s[11][11];
int visited[11][11];
int dem;
int sida;
vector<int> vect;

void input(){
    s[1][2] = 1;
    s[1][5] = 1;
    s[1][3] = 1;
    s[2][3] = 1;
    s[2][5] = 1;
    s[3][4] = 1;
    s[3][5] = 1;
    s[4][5] = 1;
}

void dequy(int cur){
    if ( dem == 8 ){    // dieu kien dung
        sida++;
        // dung la vi co ket qua roi
        for (int i=0;i<vect.size();i++)
            printf("%d ",vect[i]);
        printf("\n");
        return;
    }
    
    for (int nex=1;nex<=5;nex++){
        if (s[cur][nex] == 1 || s[nex][cur] == 1){
            if ( visited[cur][nex] == 0 ){
                //tien
                visited[cur][nex] = 1;
                visited[nex][cur] = 1;
                dem++;
                vect.push_back(nex);
                
                dequy(nex);
                
                
                if ( sida >= 3 )
                    return;     // de thoat khoi toan bo vong de quy
                
                vect.pop_back();
                dem--;
                visited[cur][nex] = 0;
                visited[nex][cur] = 0;
                //lui
            }
        }
    }
}

void solve(){
    dem = 0;
    sida = 0;
    vect.push_back(1);
    dequy(1);
}

int main(int argc, const char * argv[]) {
    freopen("input.txt","r",stdin);

    int ntest = 1;
    
    //scanf("%d",&ntest);
    
    for (int itest=0;itest<ntest;itest++){
        input();
        solve();
    }
}
