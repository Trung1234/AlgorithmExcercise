#include <iostream>
#include <fstream>
#include <math.h>
#include <string.h>
#include <stdio.h>
#include <algorithm>

using namespace std;

int n;
;
struct NewNumber{
	int idx;
	int val;
};
NewNumber s[111];
void input(){
    scanf("%d",&n);
    
    for (int i=1;i<=n;i++)
        scanf("%d",&s[i].val);
        s[i].idx = i+1;
//    sort(s,s+n);   
}
int timvitriBinarySearch(int x){
	int low = 1, up = n;
	
	while(low <= up){
		int mid = (up+low)/2;
		if(s[mid].val<x){
			low = mid +1;
		}
		else if(s[mid].val>x){
			up = mid -1;
		}
		else{
			return s[mid].val;
		}
	}
	return -1;
}
bool cmp(NewNumber so1,NewNumber so2){
	if(so1.val < so2.val)
		return 1;
	return 0;	
}
int find(int data){

   int comparisons = 0;
   int index = -1;
   int i;

   // duyet qua tat ca phan tu
   for(i = 0;i<MAX;i++){
	
      // dem so phep tinh so sanh da thuc hien 
      comparisons++;
		
      // neu tim thay du lieu, thoat khoi vong lap
		
      if(data == intArray[i]){
         index = i;
         break;
      }
		
   }   
	
   printf("Tong so phep so sanh da thuc hien: %d", comparisons);
   return index;
}
void solve(){
    int m,x;
    
    scanf("%d",&m);
    for (int i=0;i<m;i++){
        scanf("%d",&x);
        
        int idx = timvitriBinarySearch(x);
        
        printf("%d ",idx);
    }
    printf("\n");
}

int main(int argc, const char * argv[]) {
    freopen("search.txt","r",stdin);
    
    int ntest;
    
    scanf("%d",&ntest);
    
    for (int itest=0;itest<ntest;itest++){
        input();
        solve();
    }
    
}
