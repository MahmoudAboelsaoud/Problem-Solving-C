#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int i,j,num_persons,c=0;
    scanf("%d",&num_persons);
    fflush(stdin);

int phone_number[num_persons];
char *phone_name[num_persons];
char *check_name[num_persons];
   /* int *phone_number=(int*)malloc(num_persons*sizeof(int));
    char *phone_name=(char*)malloc(num_persons*sizeof(char));
    char *check_name=(char*)malloc(num_persons*sizeof(char));*/

    for(i=0;i<num_persons;i++)
    {
        printf("user name and user number :- ");
        scanf("%s %d",&phone_name[i],&phone_number[i]);
        fflush(stdin);
        /*printf("user number :- ");
        scanf("%d",&phone_number[i]);
        fflush(stdin);*/
    }

    for(i=0;i<num_persons;i++)
    {
        printf("name to search :- ");
        scanf("%s",&check_name[i]);
        fflush(stdin);
    }
for(j=0;j<num_persons;j++)
{
    for(i=0;i<num_persons;i++)
    {
       if(check_name[j]==phone_name[i])
        {
         printf("%s = %d\n",&phone_name[i], phone_number[i]);
                    //fflush(stdout);
                    c++;
        }
    }
     if(c!=1)
         {
            printf("Not Found\n");
            //fflush(stdout);
            c=0;
         }
    i=0;
    c=0;
}

    return 0;
}
