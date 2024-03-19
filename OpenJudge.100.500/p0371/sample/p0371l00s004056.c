#include<stdio.h>

int main(){
  int n;
  long a, max=-1000000, min=1000000, sum=0, i;

  scanf("%d",&n);
  
  for(i=0;i<n;i++){
    scanf("%ld",&a);
    sum+=a;
    if(a>max) max=a;
    if(a<min) min=a;
  }

  printf("%ld %ld %ld\n",min,max,sum);
  return 0;
}

