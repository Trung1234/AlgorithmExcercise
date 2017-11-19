#include <stdio.h>
#include <fstream>
int n;
char ch[111];
void solve(){
	int len = strlen(ch);
	for(int i=0;i<len;i++)
		if( ch[i] >= 'A' && ch[i] <= 'Z')
			ch[i] = ch[i] + 32;
		printf("%c",ch[i]);
	printf("\n");		
}
int main()
{
	char ch[11111];
    for(int i=0;i<255;i++) {printf("%c",i);}
}
