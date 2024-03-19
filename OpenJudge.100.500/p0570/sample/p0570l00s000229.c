#include<stdio.h>

int main(){

    long a,b;
    scanf("%ld %ld",&a,&b);

    long sum=a+b;
    sum=sum/2;

    long left=a-sum;
    long right=b-sum;
    if(left<0)left=-left;
    if(right<0)right=-right;

    if(left==right){
        printf("%ld\n",sum);
    }else{
        printf("IMPOSSIBLE\n");
    }
    return 0;
}