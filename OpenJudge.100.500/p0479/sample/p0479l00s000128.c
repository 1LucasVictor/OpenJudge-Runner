#include<stdio.h>
int main(void)
{
  int N,i;
  scanf("%d",&N);
  int A[N-1],boss[N];
  for(i=0;i<N;i++)
    boss[i]=0;
  for(i=0;i<N;i++){
    scanf("%d",&A[i]);
    boss[A[i]-1]++;
  }
  for(i=0;i<N;i++)
    printf("%d\n",boss[i]);
}