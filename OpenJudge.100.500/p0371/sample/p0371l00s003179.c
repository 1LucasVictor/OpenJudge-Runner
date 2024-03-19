#include <stdio.h>
int main(){
  int num[10000];
  int n,m,o,temp,sum;
  scanf("%d",&m);
  for(n=0;n<m;n++){
    scanf("%d",&num[n]);
  }
  for(n=0;n<m-1;n++){
    for(o=n;o<m;o++){
      if(num[o]>num[n]){
        temp=num[o];
        num[o]=num[n];
        num[n]=temp;
      }
    }
  }
  for(n=0,sum=0;n<m;n++){
    sum+=num[n];
  }
  printf("%d %d %d\n",num[m-1],num[0],sum);
  return 0;
}