#include <stdio.h>
int main(){
  int n,i;
  long a;
  long min=1000000;
  long max=-1000000;
  long sum=0;
  scanf("%d\n",&n);
  for(i=0;i<n;i++){
    scanf("%ld",&a);
    if(a<min)min=a;
    if(a>max)max=a;
    sum += a;
  }
  printf("%d %d %d\n",min,max,sum);
  return 0;
}