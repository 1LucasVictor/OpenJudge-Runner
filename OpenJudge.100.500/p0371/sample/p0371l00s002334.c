#include<stdio.h>

int main(void){

   int n,a,min=1000000,max=-1000000,sum=0,i;
   
   scanf("%d",&n);
   
   for(i=0;i<n;i++){
      scanf("%d",&a);
      if(min>a){
         min=a;
}
      if(max<a){
         max=a;
}
      sum+=a;
}
   printf("%d %d %d\n",min,max,sum);
   
   return 0;
}