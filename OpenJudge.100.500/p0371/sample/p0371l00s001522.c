#include <stdio.h>
int main(){
  int n,max,min,i,a;
  long int sum=0;
  max = -1000000;
  min = 1000000;

  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d%",&a);
    if(max<a) max = a;
    if(min>a) min = a;
    sum+=a;
  }
  printf("%d %d %ld\n",min,max,sum);

  return 0;
}
