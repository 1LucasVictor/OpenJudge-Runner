#include<stdio.h>

int main(){

    long a,b;
    scanf("%ld %ld",&a,&b);

    long sum=a+b;
    if(sum/2%1==0){
        printf("%ld\n",sum/2);
    }else{
        printf("IMPOSSIBLE\n");
    }
    return 0;
}