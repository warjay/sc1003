	/*edit*/

/*custom header*/

	/*end_edit*/
#include <stdio.h>
void strIntersect(char *str1, char *str2, char *str3);
int main() 
{
   char str1[50],str2[50],str3[50];
   
   printf("Enter str1: \n");
   scanf("%s",str1);
   printf("Enter str2: \n");   
   scanf("%s",str2);
   strIntersect(str1, str2, str3);
   if (*str3 == '\0')
      printf("strIntersect(): null string\n");
   else
      printf("strIntersect(): %s\n", str3);  
   return 0;
}
void strIntersect(char *str1, char *str2, char *str3)
{
	/*edit*/
   /* Write your code here */
    int i;
    int x = 0;
    char *p;
    for (i=0;i<strlen(str1);i++) {
        if (p = strchr(str2,str1[i])) {
        str3[x] = *p;
        x++;
        }
    }
    str3[x] = '\0';

	/*end_edit*/
}