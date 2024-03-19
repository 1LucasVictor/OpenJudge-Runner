#include<stdio.h>
int main()
{
  int N;
  int i,j;
  long int flag=0;
  scanf("%d",&N);
  long int A[N];
  for(i=0;i<N;i++)
  {
    scanf("%ld",&A[i]);
  }
  for(i=0;i<N;i++)
  {
    for(j=i+1;j<N;j++)
    {
      if(A[i]==A[j])
      {
        flag=1;
        break;
        break;
      }
    }
  }
  if(flag==0){
    printf("YES");
  }
  else{
    printf("NO");
  }
  return 0;
}
