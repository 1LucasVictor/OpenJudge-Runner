#include<stdio.h>
int A[200010], result[200010];
int main()
{
  int N;

  int sum=0;
  scanf("%d",&N);
  for(int i=2;i<=N;i++){
    scanf("%d",&A[i]);
    result[A[i]]++;
  }
  for(int i=1;i<=N;i++){
    printf("%d\n",result[i]);
  }
}