#include<stdio.h>
#define M 10000
#define N 5000

int main(void){
  int i,j,k,n,num;
  int number[N];
  int sum,max[M];

  for(i=0;;i++){
    scanf("%d\n",&num);
    if(num==0) break;
    for(j=0;j<num;j++)
      scanf("%d",&number[j]);
    max[i]=0;
    for(j=0;j<num;j++){
      sum=0;
      for(k=j;k<num;k++){
        sum+=number[k];
        if(sum>=max[i])  max[i]=sum;
      }
    }
  }
  n=i;
  for(i=0;i<n;i++)
    printf("%d\n",max[i]);
  return 0;
}