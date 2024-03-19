#include<stdio.h>
int main()
{
    int n,i,c=0;
    scanf("%d",&n);
    while(n>0)
    {
        i=n%10;
        n=n/10;
        if(i==7)
        {
            printf("Yes");
            c++;
            break;
        }
    }
    if(c==0)
        printf("No");
}
