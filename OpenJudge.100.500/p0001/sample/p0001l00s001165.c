#include <stdio.h>
int main(){
   int a,b,n,i;
   
   
   while(scanf("%d %d",&a,&b)!=EOF){
       n=a+b;
       
       for(i=0;n>0;i++)
            n/=10;
            
            printf("%d\n",i);
       }
     return(0);
}

