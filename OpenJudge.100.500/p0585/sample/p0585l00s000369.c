#include <stdio.h>
int main(){
    int A,B,T,sum=0,i;
    scanf("%d%d%d",&A,&B,&T);
    for(i=A;i<=T;i+=A){
        sum+=B;
    }
    printf("%d\n",sum);
    return 0;
}