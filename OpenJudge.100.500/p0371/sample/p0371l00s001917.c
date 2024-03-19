#include<stdio.h>

main(){

int i,n,a,max,min;
long int sum=0;

scanf("%d",&n);

for(i=0;i<n;i++){
 scanf("%d",&a);

if(i==0){
 max = a;
 min = a;
 }

 if(a > max){
 max = a;
 }

 if(a < min){
 min = a;
 }
 
 sum = sum + a;
}

printf("%d %d %ld\n",min,max,sum);

return 0;
}

