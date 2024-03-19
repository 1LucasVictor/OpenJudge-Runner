#include<stdio.h>
#include<string.h>
int main()
{
   char A[200000],B[200000];
    int i,k=0;
    scanf("%s %s",&A,&B);
    for(i=0;i<strlen(A);i++)
    {
        if(A[i]!=B[i])
            k++;
    }
    printf("%d\n",k);
    return 0;
}