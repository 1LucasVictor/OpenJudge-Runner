#include<stdio.h>

int main(void){
    int a,b,diff;
    scanf("%d %d",&a,&b);
    diff=a+b;
    if(diff%2==0){
        printf("%d\n",diff/2);
    }else{
        printf("IMPOSSIBLE\n");
    }
    return 0;
}
