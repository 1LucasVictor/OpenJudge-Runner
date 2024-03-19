#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

int main(){
    int a,b,c,k;
    scanf("%d %d %d %d",&a,&b,&c,&k);
    int sum=k;
    if(sum-a<=0){
        printf("%d\n",k);
        return 0;
    }
    sum=k-a;
    if(sum-b<=0){
        printf("%d\n",a);
        return 0;
    }
    sum=sum-b;
    printf("%d\n",a-sum);
    

    return 0;
}