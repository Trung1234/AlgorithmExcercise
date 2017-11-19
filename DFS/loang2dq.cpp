#include <stdio.h>
#include <fstream>
#include <vector>
#include <iostream>
#include <stdlib.h>
#include <algorithm>

using namespace std;

int n, nduong;
bool flag[111][111];
int q[111];// queue
bool d[111];// danh dau di qua hay chua
vector<int> vect;

void input(){
    int a, b;
    scanf("%d %d", &n, &nduong);
    // reset danh dau duong
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++)
            flag[i][j] = 0;
    for(int i = 0; i < nduong;i++){
        scanf("%d %d", &a, &b);
        flag[a][b] = 1;
        flag[b][a] = 1;
    }
}

int dfs(int lang){
    int sz = 1;
    
    d[lang] = 1;
    
    for (int i=1;i<=n;i++){
        if ( i != lang && flag[lang][i] == 1 && d[i] == 0 )
            sz = sz + dfs(i);
    }
    
    return sz;
}

void solve(){
    for(int i =1; i <= n; i++){
        d[i] = 0;
    }
    int count = 0;
    vect.clear();
    
    for(int i =1; i <= n; i++){
        if(d[i] == 0){
            int sz = dfs(i);
            vect.push_back(sz);
        }
    }
    
    sort(vect.begin(),vect.end());
    printf("%d\n", vect.size());
    for (int i=0;i<vect.size();i++)
        printf("%d ",vect[i]);
    printf("\n");
}
int main()
{
    freopen("lang2.txt","r", stdin);
    
    int ntest;
    scanf("%d", &ntest);
    
    for(int i = 0; i < ntest; i++){
        input();
        solve();
    }
    
    return 0;
}
