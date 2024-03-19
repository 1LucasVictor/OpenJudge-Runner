#include <stdio.h>
 
int main(){
 int a,b,c,i,count=0;
 scanf("%d %d %d",&a,&b,&c);
 if(1<=a && a<=10000 && 1<=b && b<=10000 && 1<=c && c<=10000 && a<=b){
  for(i=a;i<b+1;i++){
   if((c%i)==0){
    count++;
   }
  }
  printf("%d\n",count);
 }
 return 0;
}