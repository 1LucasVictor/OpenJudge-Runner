#include<stdio.h>
#define N 1000

int main(void){
  int i,num,j,k;
  int n[N];
  int count,c;

  for(i=0;scanf("%d",&n[i])==1;i++){}
  num=i;
  for(i=0;i<num;i++){
    count=0;
    for(j=2;j<=n[i];j++){
      c=1;
      for(k=2;k<j;k++){
        if(j%k==0){
          c=0;
          break;
        }
      }
      count+=c;
    }
    printf("%d\n",count);
  }
  return 0;
}