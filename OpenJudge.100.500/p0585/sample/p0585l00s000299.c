#include<stdio.h>

int main(){
    int a,b,i,t,sum=0;
    scanf("%d %d %d",&a,&b,&t);
    for(i=1;i<t+1;i++){
        if(i%a==0)sum+=b;
    }
    printf("%d\n",sum);

    return 0;
}