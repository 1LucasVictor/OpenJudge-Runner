#include <stdio.h>
int main()
{
    int a,b,c=0;
    scanf("%d",&a);
    b=a%10;
    a=a/10;
    if(b==1){
        c=c+1;
    }
    b=a%10;
    a=a/10;
    if(b==1){
        c=c+1;
    }

    b=a%10;
    a=a/10;
    if(b==1){
        c=c+1;
    }
    printf("%d",c);

    return 0;
}
