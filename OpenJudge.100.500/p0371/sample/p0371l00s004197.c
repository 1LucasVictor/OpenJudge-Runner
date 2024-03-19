#include<stdio.h>

int main(void){
  long n[9999],i,sum=0,min,max,flag;
  scanf("%ld",&flag);

  for(i=0;i<flag;i++){
    scanf("%ld",&n[i]);
    sum=sum+n[i];
  }

  max=n[0];
  min=n[0];

  for(i=0;i<flag;i++){
    if(max<n[i]){
      max=n[i];
    }

    if(n[i]<min){
      min=n[i];
    }
  }

  printf("%ld %ld %ld\n",min,max,sum);

}

