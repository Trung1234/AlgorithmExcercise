#include <iostream>  
using namespace std;  
  
string add (string &s1, string &s2){  
int carry=0,sum,i;  
  
string  min=s1,  
 max=s2,  
 result = "";  
  
// Finds the bigger string  
if (s1.length()>s2.length()){  
 max = s1;  
 min = s2;  
} else {  
 max = s2;  
 min = s1;  
}  
  
// Fills the result for overlapping regions of sum  
for (i = min.length()-1; i>=0; i--){  
 sum = min[i] + max[i + max.length() - min.length()] + carry - 2*'0';  
  
 carry = sum/10;  
 sum %=10;  
  
 result = (char)(sum + '0') + result;  
}  
  
// Summates the previous carry and the remaining digits of bigger string  
i = max.length() - min.length()-1;  
  
while (i>=0){  
 sum = max[i] + carry - '0';  
 carry = sum/10;  
 sum%=10;  
  
 result = (char)(sum + '0') + result;  
 i--;  
}  
  
// Adds the carry if remaining to the last digit e.g 999+1=1000  
if (carry!=0){  
 result = (char)(carry + '0') + result;  
}  
  
return result;  
}  
  
int main (){  
// implementation  
string a,b;  
cin >> a >> b;  
cout << add (a,b)<<endl;  
return 0;  
}  
