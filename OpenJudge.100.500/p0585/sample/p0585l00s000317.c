#include<stdio.h>
int main(void){
    int a,b,t,i,n;
    scanf("%d %d %d",&a,&b,&t);
    n=a;
    for(i=0;n<t+0.5;i++){
        n+=a;
    }
    printf("%d\n",i*b);
}
