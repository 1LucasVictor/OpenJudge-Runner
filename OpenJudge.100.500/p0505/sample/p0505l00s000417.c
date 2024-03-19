#include <stdio.h>

int main(void)
{
 int N,H,A[100],i;

 scanf("%d%d",&H,&N);
 for(i=0;i<N;i++){
  scanf("%d",&A[i]);
 }

 for(i=0;i<N;i++){
 H=H-A[i];
 }

 if(H<=0)
  printf("Yes\n");
 else
  printf("No\n");

 return 0;
}
