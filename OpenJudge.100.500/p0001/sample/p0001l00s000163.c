#include<stdio.h>
 
int main(void){
     
    int a,b,sum,num;
     
    while(scanf("%d %d", &a, &b) != EOF){
        num=a+b;
        sum=0;
        while(num!=0){
            num/=10;
            sum++;
        }
        printf("%d\n", sum);
    }
     
    return 0;
}