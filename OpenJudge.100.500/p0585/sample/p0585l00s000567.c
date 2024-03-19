#include<stdio.h>
int main(void){
int a,b,sum=0;//aの倍数秒後にb枚ずつビスケットを生産する。
int t;
scanf("%d %d %d",&a,&b,&t);
while(t+0.5-a>0){
    t=t-a;
    sum=sum+b;
}
printf("%d",sum);
return 0;
}