#include <stdio.h>
#include <algorithm>

using namespace std;

int test;
int a[111],b[111],b1[111];
int n,nb,nb1;

void input()
{
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
}
bool cmp(int s1,int s2){
    if ( s1%2==0&&s2%2 == 1) return 1;
    else if (s1%2==1 &&s2%2==0) return 0;
    else if (s1%2 == 0 && s2%2==0) 
    	if(s1<s2)
    		return 1;
    	return 0;
	if(s1>s2)
    	return 1;
    return 0;		
}

void solve()
{
	nb=0;
	nb1=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]%2==0)
			b[nb++]=a[i];
		else if(a[i]%2!=0)
			b1[nb1++]=a[i];	
	}
	sort(b,b+nb);
	sort(b1,b1+nb1);
	reverse(b1,b1+nb1);
}


void output()
{
	for(int i=0;i<nb;i++){
		printf("%d ",b[i]);
	}
	for(int j=0;j<nb1;j++){
		printf("%d ",b1[j]);
	}
}

int main()
{
	freopen("sorting2.txt","r",stdin);
	scanf("%d",&test);
	for(int i=1;i<=test;i++){
		input();
		solve();
		output();
		printf("\n");
	}
}
