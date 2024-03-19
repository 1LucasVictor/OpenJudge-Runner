#include <stdio.h>
int h(int a,int b){
  if(b % a == 0){
   return (a + b);
 }else{
   return (b - a);
  }
}
int main(){
int a; scanf("%d",&a);
int b; scanf("%d",&b);
 printf("%d\n",h(a,b));
 return 0;
}