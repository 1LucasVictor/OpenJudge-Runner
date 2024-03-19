#include<stdio.h>
int main(void){
    int a,b;
    int sum;
    scanf("%d %d",&a,&b);
    sum=a+b;
    if(a==b){
        printf("0\n");
    }else{
    if(sum%2==0){
        printf("%d\n",sum/2);
    }else{
        printf("IMPOSSIBLE\n");
    }}
    return 0;
}