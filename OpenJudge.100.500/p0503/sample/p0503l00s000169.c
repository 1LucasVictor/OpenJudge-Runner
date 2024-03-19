#include<stdio.h>
#include<string.h>
int main(void)
{
  
  int i,j,N;
  int flag=1;
  int A[200001];
    scanf("%d\n",&N);
  for(i=0;i<N;i++){
    scanf("%d",&A[i]);
  }
  i=-1;
  while(flag!=0 && i<N){
     i=i+2;
    for(j=i;j<N-1;j++){
      if(A[i]==A[j+1] || A[N-1-i]==A[N-1-(j+1)]){
        flag=0;
        break;
      }
    }
  }
  if(flag==0)
    printf("NO");
  if(flag==1)
    printf("YES");
    return 0;
}