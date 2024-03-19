#include<stdio.h>
int main()
{
    int a ,b ;
    scanf("%d", &a);
    scanf("%d", &b);
    if(a >= 1 && b <= 10000){
    if((a*b) % 2 == 0 ){
        printf("Even");
    }
    else{
        printf("Odd");
    }
    }
    else{
    printf("1 isn't less then a and b is not less then 10000 is not true");
    }
}
