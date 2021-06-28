/***********************************************/
/* Auther     : Mahmoud Aboelsaoud             */
/* Date       : 27 Jun 2021                    */
/* Version    : V01                            */
/*Description : Taxis problem                  */
/***********************************************/
#include <stdio.h>
#include <stdlib.h>

 int arr_userInputs[4]={0};/*Array carry the inputs from the user for the number for each group A B C D */
    int TotalTaxisNum=0; /*The Minimum Numbers Of Taxis Needed*/
    int Copy_n =0;
    int Copy_k =0;

int main()
{
    /*for enter the number of A and B and C and D groups
    as A have 4 student an each set
    as B have 3 student an each set
    as C have 2 student an each set
    as D have 1 student an each set
*/
    for(int i=0;i<4;i++)
    {
        printf("The Number Of Children In The %d-th Group: ",i+1);
        scanf("%d",&arr_userInputs[i]);
    }
    printf("\n************************************************\n");
    /*For the A group*/
    TotalTaxisNum  += ((arr_userInputs[0]*4)/4);/*to get  number of taxi travels from A 4-th group */

    /*For the D group*/
    if(arr_userInputs[2]%2==0)
    {
        TotalTaxisNum += ((arr_userInputs[2]*2)/4); /*to get  number of taxi travels from C 3-th group */
    }
    else
    {
         Copy_n = (arr_userInputs[2]*2) - ((arr_userInputs[2]*2)%4);
         TotalTaxisNum += Copy_n/4;
         Copy_k +=(arr_userInputs[2]*2)%4;   /*to get  number if there any remaining students in the C 3-th group */
        // printf(" %d  ", Copy_k);
    }

   /* for group B and D*/
    if(arr_userInputs[1] <= arr_userInputs[3])
    {
         TotalTaxisNum += ((arr_userInputs[1]*3)+(arr_userInputs[3]*1))/4;  /*to get  number of taxi travels from B and D groups 2-th , 4-th group if D>=B */
         Copy_k   += ((arr_userInputs[1]*3)+(arr_userInputs[3]*1))%4; /*to get  number if there any remaining students in B and D groups 2-th , 4-th group if D>=B*/
    }
    else
    {
        TotalTaxisNum += arr_userInputs[3];  /*to get  number of taxi travels from B and D groups 2-th , 4-th group if D<=B */
        Copy_k   += (arr_userInputs[1]%arr_userInputs[3])*3; /*to get  number if there any remaining students in B and D groups 2-th , 4-th group if D<=B */
    }
    /*to handle if there a remaining students  from group B or C  */
    if(Copy_k%4==0)
    {
        TotalTaxisNum +=Copy_k/4;
    }
    else
    {
        TotalTaxisNum+=1;
    }

    printf("The Minimum Numbers Of Taxis Needed = %d\n",TotalTaxisNum);
    system("pause");
    return 0;
}
