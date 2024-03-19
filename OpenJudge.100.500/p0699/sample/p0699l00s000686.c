#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if((a>=1&&a<=5)&&(b>=1&&b<=7)&&(c>=1&&c<=5))
    {
        printf("YES\n");
    }
    else if((a>=1&&a<=7)&&(b>=1&&b<=5)&&(c>=1&&c<=5))
    {
        printf("YES\n");
    }
    else if((a>=1&&a<=5)&&(b>=1&&b<=5)&&(c>=1&&c<=7))
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}