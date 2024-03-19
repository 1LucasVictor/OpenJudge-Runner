#include <stdio.h>

int main(void)
{
    int a,b,c,d;
    scanf("%d %d",&a,&b);
    if (b%a==0){
    c=a+b;
    printf("%d\n",c);
    }   
    else{
    d=b-a;
    printf("%d\n",d);
    }   
    return 0;
}
