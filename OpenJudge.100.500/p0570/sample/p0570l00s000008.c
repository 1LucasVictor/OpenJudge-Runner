#include<stdio.h>
int main(){
  int A,B,c;
  scanf("%d %d",&A,&B);
  if(A%2==0&&B%2==0)
   {

    c = (A+B)/2;
  printf("%d\n",c);
   }
   else if(A%2!=0&&B%2!=0)
   {
       c = (A+B)/2;
       printf("%d\n",c);
   }
  else printf("IMPOSSIBLE\n");






}
