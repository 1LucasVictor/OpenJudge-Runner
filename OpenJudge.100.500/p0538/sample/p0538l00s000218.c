#include<stdio.h>
int main()
{
    int a,b,i,j,l=0;
    scanf("%d %d",&a,&b);

    for(j=1;j<=9;j++)
    {
        for(i=1;i<=9;i++)
            {


         if((a*b)==(j*i))
            {
                l=1;
         }
            }}
            if(l==1){
            printf("%d",a*b);
         }
         else{
            printf("-1");
         }

    return 0;
}