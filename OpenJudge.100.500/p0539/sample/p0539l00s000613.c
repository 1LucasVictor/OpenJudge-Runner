#include<stdio.h>
int main(void){
    int n, i, j;
    scanf("%d",&n);
    if((n>0)&&(n<10)) printf("Yes\n");
    else if((n>1)&&(n<19)&&(n%2==0)) printf("Yes\n");
    else if((n>1)&&(n<28)&&(n%3==0)) printf("Yes\n");
    else if((n>1)&&(n<37)&&(n%4==0)) printf("Yes\n");
    else if((n>1)&&(n<46)&&(n%5==0)) printf("Yes\n");
    else if((n>1)&&(n<55)&&(n%6==0)) printf("Yes\n");
    else if((n>1)&&(n<64)&&(n%7==0)) printf("Yes\n");
    else if((n>1)&&(n<73)&&(n%8==0)) printf("Yes\n");
    else if((n>1)&&(n<82)&&(n%9==0)) printf("Yes\n");
    else printf("No\n");
    return 0;
}