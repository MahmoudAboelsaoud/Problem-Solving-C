#include <stdio.h>
#include <stdlib.h>


/*int surfaceArea(int A_rows, int A_columns, int**A)
{
    int i,j,sum=0;
    if(A!=NULL)
      for(i=0;i<A_rows;i++)
        {
          for(j=0;j<A_columns;j++)
            {
            //sum +=A[i][j];
            sum +=*(*(A+i)+j);
            //printf("%d",sum);
            }
        }

        sum =sum*A_rows;
        sum=sum - (A_rows + A_columns);
    return sum;
}*/

int surfaceArea(int A_rows, int A_columns, int**A)
{
    int i,j,r0=0,rn=0,c0=0,cn=0,sn=0,sum=0;
    if(A!=NULL)
    {
        for(i=0;i<A_columns;i++)
        {
            for(j=1;j<A_rows;j++)
            sn+=abs(A[i][j]-A[i][j-1]);
        }

        for(i=0;i<A_rows;i++)
        {
            for(j=1;j<A_columns;j++)
            sn+=abs(A[j][i]-A[j-1][i]);
        }


        for(i=0;i<A_columns;i++)
          {
            r0+=A[0][i];
            rn+=A[A_columns-1][i];
          }
        for(i=0;i<A_rows;i++)
          {
             c0+=A[0][i];
             cn+=A[A_rows-1][i];
          }
    }
    sum=r0+rn+c0+cn+(2*A_rows*A_columns)+sn;
return sum;
}

int main()
{
    int arr[3][3]={{1,3,4},{2,2,3},{1,2,4}};
  int x= surfaceArea(3,3,arr);
   printf("%d",x);
/*
   int i,j,sum=0;
    //if(A!=NULL)

      for(i=0;i<3;i++)
        {
          for(j=0;j<3;j++)
            {
            //sum +=arr[i][j];
            sum +=*(*(arr+i)+j);
            printf("%d\n",sum);
            }
        }

        sum =sum*3;
        sum=sum - (3 + 3);
        printf("%d",sum);



*/
    return 0;
}
