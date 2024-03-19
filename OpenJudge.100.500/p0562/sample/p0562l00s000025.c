#include <stdio.h>

int main(void)
{
 int A,B;
 int s;

 scanf("%d%d",&A,&B);

 if(A<B){
  s=B/A;
  printf("%d\n",s+1);
 }
 else printf("1\n");

 return 0;
}

