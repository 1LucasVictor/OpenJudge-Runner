#include<stdio.h>
int main(void){
long int max=-1000000000,x[200001];
long int i,n,r;
scanf("%ld",&i);
for(n=0;n<i;n++){
scanf("%ld",&x[n]);
}
for(n=1;n<i;n++){
for(r=0;r<n;r++){
if(max<x[n]-x[r]){max=x[n]-x[r];}
}
}
printf("%ld\n",max);
return 0;
}