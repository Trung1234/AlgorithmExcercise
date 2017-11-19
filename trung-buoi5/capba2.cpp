#include<stdio.h>
#include<string.h>
#include <conio.h> 
int search(char[], char[]);
 
int main() {
	//cach 1
//   int loc;
// 
//   char source[] = "maharashtra";
//   char target[] = "sht";
// 
//   loc = search(source, target);
// 
//   if (loc == -1)
//      printf("\nNot found");
//   else
//      printf("\nFound at location %d", loc + 1);
// 
//   return (0);
//   
   // cach 2 
   char str1[255], str2[255];
	bool test;
	printf ("Nhap chuoi thu nhat:");
	
	gets(str1);
	printf ("Nhap chuoi thu hai: ");

	gets(str2);
	bool b = strstr(str1,str2);
	if (b ==1)
	printf ("Chuoi thu hai co trong chuoi thu nhat");
	else printf ("Chuoi thu 2 khong co trong cuoi thu nhat");
}
 
int search(char src[], char str[]) {
   int i, j, firstOcc;
   i = 0, j = 0;
 
   while (src[i] != '\0') {
 
      while (src[i] != str[0] && src[i] != '\0')
         i++;
 
      if (src[i] == '\0')
         return (-1);
 
      firstOcc = i;
 
      while (src[i] == str[j] && src[i] != '\0' && str[j] != '\0') {
         i++;
         j++;
      }
 
      if (str[j] == '\0')
         return (firstOcc);
      if (src[i] == '\0')
         return (-1);
 
      i = firstOcc + 1;
      j = 0;
   }
}
