#include<stdio.h>

int main(){

int a,b,c;

int i;

int sum=0;

scanf("%d %d %d",&a,&b,&c);

for(i=a;i<=b;i++){

if(c%i==0){

sum++;

}

}

printf("%d\n",sum);

return 0;

}