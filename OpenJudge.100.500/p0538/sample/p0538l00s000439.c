#include<stdio.h>
int main()
{
    int a, b, s;
    scanf("%d %d",&a,&b);
    if(a>0&&a<10 && b>0&&b<10){
        s = a*b;
    }
    else{
        s = -1;
    }
    printf("%d",s);
    return 0;
}
