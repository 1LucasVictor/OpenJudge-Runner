#include<stdio.h>
int main()
{
  int N;
  scanf("%d",&N);
  int flag=0;
  if(N%10==7){
    flag=1;
  }
  else{
    N=N/10;
    if(N%10==7){
      flag=1;
    }
    else{
      N=N/10;
      if(N%10==7){
        flag=1;
      }
    }
  }
  if(flag==1){
    printf("Yes");
  }
  else{
    printf("No");
  }
  return 0;
}
