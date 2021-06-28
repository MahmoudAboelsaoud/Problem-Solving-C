/***********************************************/
/* Auther     : Mahmoud Aboelsaoud             */
/* Date       : 27 Jun 2021                    */
/* Version    : V01                            */
/*Description : Non repeted number problem     */
/***********************************************/
#include <stdio.h>
#include <stdlib.h>

int GetElementNotReapted (int *arr, int size );
int main()
{

   int arr[11]={0,10,8,2,0,2,9,9,2,0,10};

   int x=GetElementNotReapted (arr, 11);
   printf("the needed element is %d\n",x);
   system("pause");/*pause the console*/
    return 0;
}


int GetElementNotReapted (int *arr, int size )
{
   int c=0;
int temp = arr[0]; /*Let the first element is the needed*/
for(int i=0 ;i < size; i++)
{
    if(i == c)
    {
        continue;/*skip the current alteration if temp index and i are the same */
    }
    else
    {
        if(temp != arr[i])/*check if temp not arr[i] if true */
        {
        temp = arr[c];
        }
        else
        {
        c++;  /*increase the temp index for the next array element*/
        temp = arr[c];
        i=-1; /*start from  the first array element to compare the new temp value with the array elements*/
        }
    }
}

return temp; /*return the element that not repeated*/
}
