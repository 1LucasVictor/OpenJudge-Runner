#include <stdio.h>

#define N 10000

int main(){
  int n,num[N],i,j,flag=0,count=0;

  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d",&num[i]);
  }

  for(i=0;i<n;i++){
    flag=0;
    for(j=2;j<num[i];j++){
      if(num[i]%j==0)
    flag=1;
      break;
    }
    if(flag==0 || num[i] == 2) count++;
  }
  printf("%d\n",count);
  return 0;
}