#include<stdio.h>
int main()
{

    int X,A,cons1=0,cons2=10;

    scanf("%d %d",&X,&A);

    if(X<A)
    {
        printf("%d\n\n",cons1);
       // printf("\n");
       // printf("%d is less than %d,so we should print %d.\n",X,A,cons1);
    }
    else
   {
        printf("%d\n",cons2);
       // printf("\n");
       // printf("%d is not less than %d,so we should print %d.\n",X,A,cons2);

   }
    return 0;

}
