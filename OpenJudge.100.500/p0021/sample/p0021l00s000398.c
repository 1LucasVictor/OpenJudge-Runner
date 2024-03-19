#include<stdio.h>
#define M 10
#define N 5000

int main(void){
  int i,j,k,n,num[M];
  int number[M][N];
  int sum,max;

  for(i=0;;i++){
    scanf("%d\n",&num[i]);
    if(num[i]==0) break;
    for(j=0;j<num[i];j++){
      scanf("%d",&number[i][j]);
    }
  }
  n=i;
  for(i=0;i<n;i++){
    max=0;
    for(j=0;j<num[i];j++){
      sum=0;
      for(k=j;k<num[i];k++){
        sum+=number[i][k];
        if(sum>=max)  max=sum;
      }
    }
    printf("%d\n",max);
  }
  return 0;
}