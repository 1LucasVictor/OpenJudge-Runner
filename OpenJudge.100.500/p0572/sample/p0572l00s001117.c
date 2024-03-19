#include <stdio.h>
#define MOD 2019

int main(){
  int L,R;
  int min = MOD*MOD;
  
  scanf("%d %d",&L,&R);
  L %= MOD;
  R %= MOD;
  if(L>R) R += MOD;

  for(int i=L;i<R;i++)
    for(int j=i+1;j<=R;j++)
      if(min > (i*j)%MOD)
	min = (i*j)%MOD;


  printf("%d\n",min);
  
  return 0;
}
