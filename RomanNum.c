#include <stdio.h>
#define TRUE 1
#define FALSE 0
int romanNum(char *str);
int main()
{ 
   int num;
   char roman[10];
   printf("Enter a Roman number: \n");
   scanf("%s",roman);
   num = romanNum(roman);
   printf("romanNum(): %d\n", num);
   return 0;
}
int romanNum(char *str)
{        
	/*edit*/
   /* Write your code here */
    int i;
    int sum;
    switch (*(str+strlen(str)-1)) {
        case 'X': sum = 10; break;
        case 'V': sum = 5; break;
        case 'I': sum = 1; break;
    }
    for (i=1;i<strlen(str);i++) {
        switch (*(str+i-1)) {//*(str+i)
            case 'X':
                sum+=10;
                break;
            case 'V':
                if (*(str+i) == 'X') {sum-=5;}
                else {sum+=5;}
                break;
            case 'I':
                if (*(str+i) != 'I') {sum-=1;}
                else {sum+=1;}
                break;
        }
    }
    return sum;

	/*end_edit*/
}