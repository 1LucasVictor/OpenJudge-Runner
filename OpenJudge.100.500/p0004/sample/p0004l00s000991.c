#include <stdio.h>
#include<stdlib.h>

int max(int a,int b){
    if(a>b) return a;
    else return b;
}

int main(void){
   long long int a,b;
   long long int i,j;
   int end=0;
   
   while(scanf("%lld %lld",&a,&b)!=EOF){
       
       for(i=llabs(a-b);end==0;i--){
           if(a%i==0 && b%i==0){
               printf("%lld ",i);
               end=1;
           }
       }
       end=0;
       
       for(j=max(a,b);end==0;j+=max(a,b)){
           if(j%a==0 && j%b==0){
               printf("%lld\n",j);
               end=1;
           }
       }
       end=0;
   }
   return 0;
}

