#include <iostream>
#include <fstream>
#include <math.h>
#include <string.h>
#include <stdio.h>
#include <map>

using namespace std;

map<string,string> db;
int n,m;
char username[1111],password[1111];
char userRequest[1111],passRequest[1111];

void input(){
    scanf("%d",&n);
    
    // nhap co so du lieu
    for (int i=0;i<n;i++){
        scanf("%s %s",&username,&password);
        db[username] = password;
    }
}

void solve(){
    scanf("%d",&m);
    
    // nhap danh sach request
    for (int i=0;i<m;i++){
        scanf("%s %s",&userRequest,&passRequest);
        
        // db[username] --> password o? input ( password trong co so du lieu )
        // passRequest  --> password nhap o? solve ( password vua nhap )
        // so sanh 2 thang
       
        if (db[userRequest] == passRequest){
            printf("1\n");
        }else{
            printf("0\n");
        }
    }
}

int main(int argc, const char * argv[]) {
    freopen("login.txt","r",stdin);
    
    input();
    solve();
}
