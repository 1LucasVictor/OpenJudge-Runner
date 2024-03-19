#include<stdio.h>
int main()
{ int j,i,A[100];
scanf("%d",&j);

for(i=1;i<=j;i++)
   {
    scanf("%d",&A[i]);
    }
 for(i=1;i<=j;i++)
 {
     if(A[i]%2==0&&(A[i]%3==0||A[i]%5==0))
    {
        printf("APPROVED\n");
            goto end;
    }
 }
printf("DENIED\n");
end:
return 0;
}
