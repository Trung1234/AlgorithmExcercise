#include <iostream>
using namespace std;
int main()
{
   int n,i,j;
   cout<<"nhap vao kich thuoc tam giac: ";
   cin>>n;
   for(i=0;i<n;i++){
      for(j=0;j<n-1-i;j++){
        cout<<(" ");
      }
    for(j=0;j<2*i+1;j++){
        if(i==n-1) cout<<("*");
//        else {
//            if(j==0|| j==2*i) printf("*");
//        else cout<<(" ");
//        }
    }
    cout<<("\n");
   }
   return 0;
}
