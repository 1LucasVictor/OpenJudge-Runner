#include<stdio.h>
int main()
{
int x;
scanf("%d",&x);
if(x%3==0||x%5==0)
printf("APPROVED\n");
else
    printf("DENIED\n");

return 0;
}
