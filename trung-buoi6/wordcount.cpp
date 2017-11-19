#include <iostream>
#include <fstream>
#include <math.h>
#include <string.h>
#include <stdio.h>
#include <map>
using namespace std;

int n;
char s[111];
int dem[111];
int ntest;
map<string,int> demString;
map<string,int>::iterator ite;// con tro


int main(int argc, const char * argv[]) {
    freopen("in.txt","r",stdin);
    while(scanf("%s",&s)>0){
    	demString[s]++;
	}
    for (ite = demString.begin();ite!= demString.end();ite++)
        if ( ite->second > 0 )
            printf("%s   %d \n",ite->first.c_str(),ite->second);
    
    
}
