#include<stdio.h>
int main(void)
{
    int x,a,b;
    scanf("%d %d %d",&x,&a,&b);
    if(a > b){
        printf("delicious");
    }
    else if(a+x > b){
        printf("safe");
    }
    else{
        printf("dangerous");
    }
    return 0;
}