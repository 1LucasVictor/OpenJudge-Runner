#include<stdio.h>
int main(void){
  long l,r;
  scanf("%ld%ld",&l,&r);
  if(r>l+4028){
  long r=l+4028;
  }
  int min=2019;
  for(long i=l;i<=r-1;i++){
	for(long j=i+1;j<=r;j++){
	if(min>(i*j)%2019)min=(i*j)%2019;
    }
  }
  printf("%d",min);
  return 0;
}