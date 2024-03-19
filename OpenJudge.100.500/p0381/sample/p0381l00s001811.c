#include<stdio.h>

int main()
{
  int n,x,i,j,k,sum,count,out[100];

  count=0;
  sum=0;
  while(1){
    scanf("%d %d",&n,&x);
    if(n==0 && x==0) break;

    for(i=1;i<=n;i++){
      for(j=i+1;j<=n;j++){
        for(k=j+1;k<=n;k++){
          if(i!=j && i!=k && j!=k){
            if(i+j+k==x) sum++;
          }
        }
      }
    }

    out[count]=sum;
    sum=0;
    count++;
  }
  for(i=0;i<count;i++) printf("%d\n",out[i]);

}