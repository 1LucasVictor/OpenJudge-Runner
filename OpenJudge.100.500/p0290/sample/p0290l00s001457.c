#include <stdio.h>
#include<math.h>
int main(void)
{
  int i,j,N,yakusuu;
  int cnt=0;
  scanf("%d",&N);
  int a[N];
  for(i=1;i<=N;i++){
    scanf("%d",&a[i]);
  }
  for(i=1;i<=N;i++){
    yakusuu=0;
    for(j=1;j<=a[i];j+=2){
      if(a[i]%j==0){
	yakusuu++;
      }
    }
      if(yakusuu==2){
	cnt++;
      }
  }

  printf("%d\n",cnt);

  return 0;
}
