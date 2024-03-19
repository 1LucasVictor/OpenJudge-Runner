#include <stdio.h>

int main(){

    int n,min,max,d;
    long long sum;
    int i =1;
    scanf("%d%d",&n,&d);
    min = d;
    max = d;
    sum = d;

    for(i = 0;i < n-1;i++){

        scanf("%d",&d);

        if( d < min){
             min = d;
       }else if( d >max){
             max = d;
       }

        sum += d;
    }

    printf("%d %d %d\n",min,max,sum);
 

    return 0;
}
