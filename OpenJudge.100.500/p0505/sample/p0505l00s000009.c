#include<stdio.h>

int main()
{
    int m,n,i,sum=0;
    scanf("%d %d",&m,&n);
    while(n>0)
    {
        scanf("%d",&i);
        sum+=i;
        n--;
    }
    if(sum>=m)
       printf("Yes");
   else
       printf("No");

}
