

#include <iostream>
#include <string.h>

using namespace std;

void demht(string ch)
{	
int i=1,kth=0,ktt=0;
string l;
while(ch[i]!='\0') // do?n n�y l� d?m s? k� t? trong x�u
{	i++; }
strcpy(l,strupr(ch)); //do kh�ng th? d�ng h�m strupr cho t?ng k� t? n�n m�nh up c? x�u r?i truy xu?t d?n t?ng k� t? 
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
