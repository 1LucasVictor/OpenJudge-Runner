#include <stdio.h>
int main(void){
    
   int a,b,c,i,k=0;
   
   scanf("%d %d %d",&a,&b,&c);
   
   for(i=a;i<=b;i++){
       if(c%i==0) k++;
       else　k=k;
   }
   
   printf("%d\n",k);
   
    return 0;
    
}
