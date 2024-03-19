#include <stdio.h>
int main(void){
   long long int a,b,temp;
   long long int i,j;
   int end=0;
   
   while(scanf("%lld %lld",&a,&b)!=EOF){
       if(a>b){
           temp=a;
           a=b;
           b=temp;
       }
       
       for(i=a;end==0;i--){
           if(a%i==0 && b%i==0){
               printf("%lld ",i);
               end=1;
           }
       }
       end=0;
       
       for(j=b;end==0;j++){
           if(j%a==0 && j%b==0){
               printf("%lld\n",j);
               end=1;
           }
       }
       end=0;
   }
   return 0;
}

