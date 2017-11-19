#include <iostream>
#include <fstream>
#include <math.h>
#include <string.h>
#include <stdio.h>
#include <algorithm>

using namespace std;

struct dayso{
    int arr[111];
    int soPhanTu;
    int countSNT;
    int ucln;
    int tong;
};
int n;
dayso s[1111];

void input(){
    scanf("%d",&n);
    
    for (int i=0;i<n;i++){
        scanf("%d",&s[i].soPhanTu);
        for (int j=0;j<s[i].soPhanTu;j++)
            scanf("%d",&s[i].arr[j]);
        s[i].countSNT = 0;
        s[i].tong = 0;
        s[i].ucln = s[i].arr[0];
    }
}

bool laSNT(int so){
    if ( so < 2 )
        return 0;
    for (int i=2;i<=sqrt(so);i++)
        if ( so%i == 0 )
            return 0;
    return 1;
}

int timUCLN(int a,int b){
    int c;
    while(b>0)
    {
        c=a%b;
        a=b;
        b=c;
    }
    return a;
}

bool cmp(dayso day1,dayso day2){
    // check SNT lon hon
    if (day1.countSNT > day2.countSNT)
        return 1;
    if (day1.countSNT < day2.countSNT)
        return 0;
    
    // check UNLN lon hon
    if (day1.ucln > day2.ucln)
        return 1;
    if (day1.ucln < day2.ucln)
        return 0;
    
    // check tong nho hon
    if (day1.tong < day2.tong)
        return 1;
    if (day1.tong > day2.tong)
        return 0;
    
    return 0;
}

void solve(){
    for (int i=0;i<n;i++){
        // tinh SNT
        for (int j=0;j<s[i].soPhanTu;j++)
            if ( laSNT(s[i].arr[j]) == 1 )
                s[i].countSNT++;
        
        // tinh ucln
        for (int j=0;j<s[i].soPhanTu;j++)
            s[i].ucln = timUCLN(s[i].ucln,s[i].arr[j]);
        
        // tinh tong
        for (int j=0;j<s[i].soPhanTu;j++)
            s[i].tong = s[i].tong + s[i].arr[j];
    }
    
    
    // sort
    sort(s,s+n,cmp);
}

void output(){
    for (int i=0;i<n;i++){
        printf("%d %d %d\n",s[i].countSNT,s[i].ucln,s[i].tong);
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
        output();
    }
    
}
