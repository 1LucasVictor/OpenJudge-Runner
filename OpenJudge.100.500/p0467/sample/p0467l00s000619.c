#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>



int main(void){
int a,b,c,k;
int sum=0;
scanf("%d %d %d %d",&a,&b,&c,&k);
if(k<=a){printf("%d",k);return 0;}
else{sum=sum+a;k=k-a;a=0;}
if(k<=b){printf("%d",sum);return 0;}
else{k=k-b;b=0;}
printf("%d",sum-k);
}
