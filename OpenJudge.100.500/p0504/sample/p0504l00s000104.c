#include  <stdio.h>

int main()
{
    int a,b;
        scanf("%d %d",&a,&b);
    if(a<b && a==b) {
        int x = 1;
        printf("%d",x);
    }
    if(b<=a && a%b>0) {
        printf("%d",(a/b)+1);
    }
    if(a%b == 0) {
        printf("%d",a/b);
    }
    
    return 0;
}