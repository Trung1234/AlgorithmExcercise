#include<iostream>
#include<string.h>
#define max 30
 
using namespace std;
 
int main()
{		
		freopen("in.txt","r",stdin);
       char kitu;// khai bao bien ki tu
       int d;//Khai bao bien nguyen ung voi ma ascii cua ki tu
       cout<<"Nhap 1 ki tu bat ky: ";
       cin>>kitu;
       int a =int (kitu);// Ep kieu de so sanh
       // so sanh de dua ra do co phai ki tu khong
       // la ki tu hoa hay thuong
       //in ra loai ki tu trai voi no
       if(97<=a && a<122){
              cout<<"\nKi tu do la ki tu thuong. In hoa la: ";
              a-=32;
              cout<<char(a)<<endl;
       }
       else if(65<=a && a<=90){
              cout<<"\nKi tu do la ki tu hoa. In thuong la: ";
              a+=32;
              cout<<char(a)<<endl;
       }
       else
              cout<<"\nDo khong phai la ki tu: "<<endl;
       system("pause");
}
