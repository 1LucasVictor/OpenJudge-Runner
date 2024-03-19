#include <stdio.h>
int total;
int val;
long max=-1000000;
long min=1000000;
long sum=0;
int x;

main(){

  scanf("%d",&total);
  if(total>0&&total<=10000){
  
  for (x=1;x<=total;x++){
   scanf("%d",&val);
   
   if(max<val){
   max=val;
   }
   if(min>val){
   min=val;
   }
   sum+=val;
  }
  }
  printf("%ld %ld %ld\n",min,max,sum);
  return 0;
}  
  