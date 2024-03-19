#include<stdio.h>

int main(void){
    int min,max,sum,con,i,x;
    scanf("%d %d",&con,&min);
    max=min;
    sum=min;
    i=1;
    while(i < con){
        scanf("%d",&x);
        if(x<min){
            min = x;
        }
        else if(x>max){
            max = x;
        }
        sum = sum + x;
        i++;
    }
    printf("%d %d %d\n",min,max,sum);
return 0;
}