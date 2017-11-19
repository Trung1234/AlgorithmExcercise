#include <conio.h> 
#include <stdio.h> 
#include <string.h> 

#define MAX 100 
void Xoa(char s[MAX], int n, int i) 
{ 
    char *p[MAX]; 
    strncpy(p, s, i - 1); 
    int len = strlen(s); 
    strcpy(p + i - 1, s + (i - 1) + n); 
    p[len - n] = '\0'; 
    strcpy(s,p); 
} 
//Them ch vao vi tri thu i cua s 
void Them(char s[MAX], int i, char ch[MAX]) 
{ 
    int len = strlen(s); 
    int lench = strlen(ch); 
    for (int j = len; j >= i - 1; j--) 
        s[j + lench] = s[j]; 
    for (j = 0; j < lench; j++) 
        s[i - 1 + j] = ch[j]; 
} 

void ThayThe(char s[MAX], char s1[MAX], char s2[MAX]) 
{ 
    int len = strlen(s); 
    int len1 = strlen(s1); 
    int len2 = strlen(s2); 
    char p[MAX]; 
    int i; 
    while ((p = strstr(s,s1)) != NULL) 
    { 
           i = p - s + 1; 
           Xoa(s,len1,i); 
           Them(s,i,s2); 
    } 
} 
void main() 
{ 
    clrscr(); 
    char s[MAX], s1[MAX], s2[MAX]; 
    printf("Nhap chuoi s : "); 
    gets(s); 
    fflush(stdin); 
    printf("Nhap chuoi s1 : "); 
    gets(s1); 
    fflush(stdin); 
    printf("Nhap chuoi s2 : "); 
    gets(s2); 
    ThayThe(s, s1, s2); 
    printf("Chuoi sau khi thay the : %s",s); 
    getch(); 
}  
