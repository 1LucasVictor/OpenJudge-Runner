#include<stdio.h>
#include<stdlib.h>
int main(){
  long long n,min=10000000,max=-10000000,sum=0,i;
  long long *array;
  scanf("%lld",&n);
  array=(long long*)malloc(n*sizeof(long long));

  for(i=0;i<n;i++){
    scanf("%lld",&array[i]);
    if(min>=array[i]){ min=array[i];}
     sum+=array[i];
    if(max<=array[i]){ max=array[i];}
 }

    printf("%lld %lld %lld\n",min,max,sum);
    return 0;
}