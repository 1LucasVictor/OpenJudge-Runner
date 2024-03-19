#include<stdio.h>

int main(void){

int n,i,ai,max,min;

double sum;


sum=0.0;


max=-1000000;


min=1000000;


scanf("%d",&n);

for(i=0;i<n;i++){

scanf("%d",&ai);

if(ai<min){


min=ai;


}


if(max<ai){


max=ai;


}


sum=sum+ai;


}


printf("%d %d %.0lf\n",min,max,sum);


return 0;


}