#include<stdio.h>

int main()
{
  int n,x,i,j,k,sum,count,out[100];

  count=0;
  sum=0;
  scanf("%d %d",&n,&x);
  while(n!=0 && x!=0){

    for(i=1;i<n-1;i++){
      for(j=i+1;j<n;j++){
        for(k=j+1;k<=n;k++){
          if(i!=j && i!=k && j!=k){
            if(i+j+k==x) sum++;
          }
        }
      }
    }

    printf("%d\n",sum);
    sum=0;
    count++;
    scanf("%d %d",&n,&x);
  }
  //for(i=0;i<count;i++) printf("%d\n",out[i]);

}