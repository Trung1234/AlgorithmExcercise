#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
	char str1[512],str2[512],rev1[512],rev2[512],ans1[513],ans2[513];
	int num1,num2,num3,num4,len1,len2,len3,len4,len5;
	num1 = num2 = num3 = num4 = 0;
	printf("Enter a whole number 512 digits or less:");
	gets(str1);
	printf("\nEnter another whole number 512 digits or less:");
	gets(str2);
	len1 = strlen(str1);
	len2 = 0;
	--len1;
	while(len2 <= len1)//this loop reverses the number in the first string
	{
		rev1[len2] = str1[len1 - len2];
		++len2;
	}
	rev1[len2] = '\0';
	len2 = 0;
	len1 = strlen(str2);
	--len1;
	while(len2 <= len1) //this loop reverses the number in the second string
	{
		rev2[len2] = str2[len1 - len2];
		++len2;
	}
	rev2[len2] = '\0';
	len3 = strlen(rev1);
	len4 = strlen(rev2);
	len1 = 0;
	len2 = 0;
	len5 = 0;
	while((len1 <= len3)&&(len2<=len4))
	{
		num1 = rev1[len1];
		num2 = rev2[len2];
		num3 = num1 - num2;
		if(num3 < 0)//This block is to "borrow" from the next number on the list if the result is less than 0
		{
			num4 = rev1[len1+1];
			num4 = num4 - 1;
			rev1[len1+1] = num4;
			num3 = num3 + 10;
		}
		ans1[len5] = num3;
		++len5;
		++len1;
		++len2;
	}
	len1 = strlen(ans1);
	len2 = 0;
	--len1;
	while(len2 <= len1)//reversing the answer back to original order
	{
		ans2[len2] = ans1[len1 - len2];
		++len2;
	}
	ans2[len2] = '\0';
	printf("%s",ans2);
	system("PAUSE");
	return 0;
}
