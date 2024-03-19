#include<stdio.h>
#include<math.h>

int main(){

  int n,i,j,count,sum=0,num[10000];
  
  scanf("%d",&n);

  for(i=0;i<n;i++){
    scanf("%d",&num[i]);

    for(j=2,count=0;j<=sqrt(num[i]);j++)
      if(num[i]%j==0)count++;

    if(count==0) sum++;
  }

  printf("%d\n",sum);

  return 0;

}