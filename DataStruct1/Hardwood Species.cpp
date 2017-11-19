#include <iostream>
#include <fstream>
#include <math.h>
#include <string.h>
#include <stdio.h>
#include <map>

using namespace std;

map<string,int> dem;
map<string,int>::iterator ite;
char str[1111];

int main(int argc, const char * argv[]) {
    freopen("input.txt","r",stdin);
    
    //input
    while (gets(str) > 0 ){
        dem[str]++;
    }
    
    // tinh tong cac value cua map
    int tongSoCay = 0;
    for (ite=dem.begin();ite!=dem.end();ite++){
        tongSoCay = tongSoCay + ite->second;
    }
    
    // tinh phan tram cua tung loai cay
    for (ite=dem.begin();ite!=dem.end();ite++){
        float percent = 100.0*ite->second/tongSoCay;
        printf("%s %.4f\n",ite->first.c_str(),percent);
    }
}
