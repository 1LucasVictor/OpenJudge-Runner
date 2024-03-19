#include <stdio.h>
int main(void)
{
    int s;
    scanf("%d",&s);
    int s3=s%10;
    int s1=s/100;
    int s2=(s-s1*100)/10;
    int ans=s1+s2+s3;
    printf("%d",ans);
    
}
