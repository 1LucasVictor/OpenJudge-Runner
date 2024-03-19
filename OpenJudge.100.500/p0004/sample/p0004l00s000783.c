#include <stdio.h>

int main(){

 unsigned int a,b,A,B;
 while(scanf("%d %d",&A,&B) != EOF){
  a=(A>B)?A:B;
  b=(A<B)?A:B;
  int r;
  while((r=a%b)!=0){
   a=b;
   b=r;
  }
  printf("%d %d\n",b,A/b*B);
 }
 return 0;
}