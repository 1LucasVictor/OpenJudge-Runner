#include<stdio.h>
#include<math.h>
int main(){
   int a,b,c,k;scanf("%d %d%d%d",&a,&b,&c,&k);
   if(k<=a){
       printf("%d",k);return 0;
   }
   if(k<=a+b){
       printf("%d",a);return 0;
   }
   if(k<=a+b+c){
       printf("%d",a-(k-a-b));return 0;
   }
   printf("%d",a-c);
}