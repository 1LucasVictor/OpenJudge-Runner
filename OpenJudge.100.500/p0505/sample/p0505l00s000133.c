#include <stdio.h>

int main(void)
{
 int N,H,A,i;

 scanf("%d%d",&H,&N);
 for(i=0;i<N;i++){
  scanf("%d",&A);
  H=H-A;
 }

 if(H<=0)
  printf("Yes");
 else
  printf("No");

 return 0;
}
