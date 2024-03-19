#include <stdio.h>

int main(void)
{
 int N,H,A[100],i;
 int s;

 scanf("%d%d",&H,&N);
 for(i=0;i<N;i++){
  scanf("%d",&A[i]);
 }
 s=0;
 for(i=0;i<N;i++){
 s+=A[i];
 }

 if(s>=H)
  printf("Yes\n");
 else
  printf("No\n");

 return 0;
}
