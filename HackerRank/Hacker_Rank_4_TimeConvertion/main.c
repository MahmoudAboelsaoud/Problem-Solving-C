#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{/*
   int n;
   for (n = 9; n!=0; n--)
     printf("n = %d", n--);
   return 0;
   */
   int c = 5, no = 10;
    do {
        no /= c;
    } while(c--);

    printf ("%dn", no);
    return 0;
}
/*

char* timeConversion(char* s)
{
int y,i=0;
char val[20];
static char *str;
  str=s;
         y = atoi(&s[0]);
         y+=12;

         itoa(y,val,10);
         s[0]=val[0];
         s[1]=val[1];
         if(y==24)
         {
             s[0]='0';
             s[1]='0';
         }
    for(i=0;i<9;i++)
    {
        str[i]=s[i];
        if(i==8)
        {
            str[i]='\0';
        }
    }
    return str;
}


int main()
{
    char str[] ="11:05:45PM";
   char *s= timeConversion(str);
   printf("%s",s);
 return 0;
}
*/
