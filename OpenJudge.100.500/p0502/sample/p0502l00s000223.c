#include<stdio.h>
main()
{
    int t;
    scanf("%d",&t);
    int inp[t];
    int counte=0;
    int counta=0;
    for(int i=0;i<t;i++)
    {
        scanf("%d",&inp[i]);
        if(inp[i]%2==0)
           {

            counte++;
           if(inp[i]%3==0||inp[i]%5==0)
            counta++;

           }
        }





if(counta==counte)
    printf("APPROVED");
else
    printf("DENIED");



}
