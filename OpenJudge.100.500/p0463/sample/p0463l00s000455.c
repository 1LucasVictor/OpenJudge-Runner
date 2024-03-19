#include<stdio.h>
int main(void)
{
    int a, b;
    scanf("%d", &a);
    b = (a % 10);
    a -= b;
    if (b==2 || b==4 || b==5 || b==7 || b==9){
        printf("hon");
    }
    else if (b==0 || b==1 || b==6 || b==8){
        printf("pon");
    }
    else
    {
        printf("bon");
    }
    return 0;
    
}    