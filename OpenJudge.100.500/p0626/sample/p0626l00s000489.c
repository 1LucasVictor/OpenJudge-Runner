#include<stdio.h>
int main(void){
int d,n;

scanf("%d %d",&d,&n);

if(d==0)
    printf("%d\n",n);
if(d==1)
    printf("%d\n",n*100);
if(d==2)
    printf("%d\n",n*10000);
    return 0;
}