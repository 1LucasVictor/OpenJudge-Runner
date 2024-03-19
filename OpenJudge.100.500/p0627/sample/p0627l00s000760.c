#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    if((a+b>a-b)&&(a+b>a*b)){
        printf("%d\n",a+b);
    }else if ((a-b>a+b)&&(a-b>a*b))
    {
        printf("%d\n",a-b);
    }else if ((a*b>a+b)&&(a*b>a-b))
    {
        printf("%d\n",a*b);
    }else if(a==0){
        printf("%d\n",b);
    }else if(b==0){
        printf("%d\n",a);
    }
}