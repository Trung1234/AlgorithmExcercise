#include <iostream>
#include <stack>
#include <string>
#include <conio.h>

using namespace std;
int main(int argc, char *argv[])
{
string strExpr;
cout<<"Enter parentness string:";
getline(cin,strExpr);
stack<int>ParentPos;

for (int i=0;i<strExpr.length();i++)
{
if (strExpr[i]=='(')
ParentPos.push(i);
else
if (strExpr[i]==')')
{
if (!ParentPos.empty())
ParentPos.pop();
else
ParentPos.push(i);
}
}

if (ParentPos.empty())
cout<<"Parentness string is right format";
else
{
cout<<"Parentness string is not in right format\n";
while (!ParentPos.empty())
{
cout<<"at position : "<<ParentPos.top()<<"\n";
ParentPos.pop();
}
}
getch();
}
