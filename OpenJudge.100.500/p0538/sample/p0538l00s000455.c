#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d%d",&m,&n);
    if(m<=9 && n<=9)
    {
       printf("%d",m*n); 
    }
    else
        printf("-1");
    return 0;
    
}