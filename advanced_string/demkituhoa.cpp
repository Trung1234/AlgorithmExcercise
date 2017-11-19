

#include <iostream>
#include <string.h>

using namespace std;

void demht(string ch)
{	
int i=1,kth=0,ktt=0;
string l;
while(ch[i]!='\0') // do?n này là d?m s? kí t? trong xâu
{	i++; }
strcpy(l,strupr(ch)); //do không th? dùng hàm strupr cho t?ng kí t? nên mình up c? xâu r?i truy xu?t d?n t?ng kí t? 
for(int k=0;k<i;k++)
{	if(strcmp(ch[k],l[k])==0)	kth++;
}
ktt=i-kth;
cout<<"So ki tu hoa = "<<kth<<" & So ki tu thuong = "<<ktt;
}

int main()
{
string ch;
cout<<"nhap chuoi: ";
getline(cin,ch); 
demht(ch);
return 0;
}
