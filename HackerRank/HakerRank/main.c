#include <stdio.h>
#include <stdlib.h>
#include<math.h>
/* sum of any array of integer
int simpleArraySum(int ar_count, int* ar)
{
    int i,sum=0;
    if(ar_count > 0)
    {
        for(i=0; i<ar_count; i++)
        {
            sum+=ar[i];
        }
    }
    return sum;
}

int main()
{
    int arr[]={1,2,3,4,5};
    int x=simpleArraySum(5,arr);
    printf("%d",x);
    return 0;
}
*/

     /*problem 2*/
#if(0)
int* compareTriplets(int a_count, int* a, int b_count, int* b, int* result_count)
{
    *result_count=2;
    int *output_array = malloc(2*sizeof(int));

     int i,a_counter=0, b_counter=0;
    if(a !=NULL && b!=NULL)
    {
        for(i=0; i<a_count; i++)
        {
            if(a[i] > b[i])
                a_counter++;
            if(a[i] < b[i])
                b_counter++;
        }
        output_array[0]=a_counter;
        output_array[1]=b_counter;

    }
    /*secend way*/
    /* static array
        static int arr_output[2]={0,0};
        *result_count=2;
        int i,a_counter=0, b_counter=0;
    if(a !=NULL && b!=NULL)
    {
        for(i=0; i<a_count; i++)
        {
            if(a[i] > b[i])
                a_counter++;
            if(a[i] < b[i])
                b_counter++;
        }
        arr_output[0]=a_counter;
        arr_output[1]=b_counter;
    }

return arr_output;*/
return output_array;
}

int main()
{
    int*count;
        int a[]={7,8,4};
        int b[]={2,2,6};
       int *ret_arr=compareTriplets(3,a,3,b,count);
        int i;
       for(i=0;i<*count;i++)
          printf("%d ",ret_arr[i]);
    return 0;
}
#endif
#if(0)
int diagonalDifference(int arr_rows, int arr_columns, int **arr)
{

        int diff=0;
        int primary_diagonal_sum=0;
        int secandary_diagonal_sum=0;
    if(arr!=NULL)
    {
        int i,j;
        for(i=0; i<arr_rows; i++)
        {
            for(j=0; j<arr_columns; j++)
            {

               // printf("%d",*(*(arr+i)+j));
                if(i==j)
                {
                   primary_diagonal_sum += *(*(arr+i)+j); //arr[][]
                }
                if((i+j)==(arr_rows-1))
                {
                   secandary_diagonal_sum+= *(*(arr+i)+j); // arr[][]
                }
            }
        }
       // if(primary_diagonal_sum > secandary_diagonal_sum)
            diff = primary_diagonal_sum - secandary_diagonal_sum;

        /*if(secandary_diagonal_sum > primary_diagonal_sum)
            diff = secandary_diagonal_sum - primary_diagonal_sum;*/
    }
return diff;
}

int main()
{

   int arr[4][4]={ {0,1,2,3}, {3,2,1,0}, {3,5,6,1}, {3,8,3,4} };
      /*int i,j;
        for(i=0; i<4; i++)
        {
            for(j=0; j<4; j++)
            {

               //printf("%d",*(*(arr+i)+j));
                             // printf("%d",arr[i][j]);

                if(i==j)
                {
               // printf("%d",*(*(arr+i)+j));

                   //primary_diagonal_sum += *(*(arr+i)+j);
                }
                if((i+j)==(4-1))
                {
                                printf("%d",*(*(arr+i)+j));

                   //secandary_diagonal_sum+= *(*(arr+i)+j);
                }


           }
        }*/
    int x=diagonalDifference(4,4,arr);
   printf("%d", x);
 //printf("%d",*(*(arr+0)+1));

    return 0;
}
#endif
#if(0)

void plusMinus(int arr_count, int* arr)
{
    if(arr!=NULL)
    {
        int i;
        int minus_count=0, plus_count=0,zeros_count=0 ;
        for(i=0;i<arr_count;i++)
        {
            if(arr[i]==0)
            {
              zeros_count++;
            }
            if(arr[i]>0)
            {
              plus_count++;
            }
            if(arr[i]<0)
            {
              minus_count++;
            }
        }
        float p=floor(plus_count)/arr_count;
        float m=floor(minus_count)/arr_count;
        float z=floor(zeros_count)/arr_count;


        printf("%f\n",p);
        printf("%f\n",m);
        printf("%f\n",z);

    }
}

int main()
{
    int arr[]={-1,-1,0,1,1};
    plusMinus(5,arr);
    /* printf("%f\n",2/5);
        printf("%f\n",2/5);
        printf("%f\n",1/5);*/
}
#endif






void staircase(int n)
{

    int i;
    for(i=0;i<n;i++)
    {
        printf("\t#");
        printf("\n");

    }



}

int main()
{
    staircase(6);
    return 0;
}
