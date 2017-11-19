#include <stdio.h>
 
int main()
{
    const int m = 5, n = m+2;
    int a[m][n], k, j;
   
    for (k = 0; k < m; k++)
        for (j=0; j<n; j++) 
			scanf("%d",&a[k][j]);
 
    printf("\nMa tran ban dau:\n");
    for (k = 0; k < m; k++)     // m hang, n cot
        {
            for (j=0; j<n; j++) printf("%4d",a[k][j]);
            printf("\n");
        }
   
            // (Moi) [k][j] <-- [m-1-j][k] (Cu)
    printf("\nXoay 90 do cung chieu kim dong ho:\n");
   
    for (k = 0; k < n; k++)     // n hang, m cot
        {
            for (j=0; j<m; j++) printf("%4d",a[m-1-j][k]);
            printf("\n");
        }
}        
