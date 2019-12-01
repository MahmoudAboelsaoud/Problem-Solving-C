#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#if(0)

void staircase(int n)
{
    int i,j,k,l;
    for(i=1;i<n+1;i++)
        {
        for(k=1;k<=n-i;k++)
            {
            printf(" ");
            }
        for(l=i;l>0;l--)
            {
            printf("#");
            }
        printf("\n");
        }
}
/*
void staircase(int n)
{
    int i,j,c=1;
    int k=1;
    n=n+1;
for(i=0;i<n;i++)
{
    printf(" ");
    c++;
    if(c==n)
    {
      for(j=0;j<k;j++)
         {
           printf("#");
         }
         k++;
         n--;
         printf("\n");
         c=1;
         i=0;
    }
}

}
*/
int main()
{

    staircase(6);
    return 0;
}

#endif



#if(0)
void miniMaxSum(int arr_count, int* arr)
{
    if(arr!=NULL)
    {
        static unsigned long long int result[5]={0};
        int i;
        unsigned long long int sum=0,temp_max,temp_min;
        for(i=0;i<arr_count;i++)
            sum+=arr[i];
        for(i=0;i<arr_count;i++)
            result[i]=sum-arr[i];
        temp_min=result[0],temp_max=result[0];
        for(i=0;i<arr_count;i++)
        {
            if(temp_max < result[i])
               temp_max=result[i];
            if(temp_min > result[i])
               temp_min=result[i];
        }
        printf("%llu  %llu",temp_min,temp_max);
    }
}


int main()
{
unsigned long long int arr[5]={256741038, 623958417, 467905213 ,714532089 ,938071625};
miniMaxSum(5,arr);
return 0;
}

#endif




int birthdayCakeCandles(int ar_count, int*ar)
{
    int i,num=0;
    if(ar!=NULL)
    {
        int temp=ar[0];
        for(i=0;i<ar_count;i++)
        {
            if(ar[i]>temp)
                temp=ar[i];
        }
        printf("%d",temp);
        for(i=0;i<ar_count;i++)
        {
            if(temp==ar[i])
                num++;
        }
    }
return num;
}

int main()
{
    int arr[10]={18 ,90 ,90 ,13 ,90 ,75 ,90 ,8 ,90 ,43};
    int x=birthdayCakeCandles(10,arr);
    printf("%d",x);
}
