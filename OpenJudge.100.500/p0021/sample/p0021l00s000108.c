#include<stdio.h>
#define N 100000
#define M 5010

int main(void){
  int i,j,k,n,num;
  int number[M];
  int sum,max[N];

  for(i=0;;i++){
    scanf("%d\n",&num);
    if(num==0)
      break;
    for(j=0;j<num;j++)
      scanf("%d",&number[j]);
    max[i]=number[0];
    for(j=0;j<num;j++){
      sum=0;
      for(k=j;k<num;k++){
        sum+=number[k];
        if(sum>max[i])  max[i]=sum;
      }
    }
  }
  n=i;
  for(i=0;i<n;i++)
    printf("%d\n",max[i]);
  return 0;
}