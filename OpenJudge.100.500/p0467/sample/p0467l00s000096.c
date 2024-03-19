#include<stdio.h>
int main(){
  long a,b,c,k;
  scanf("%ld%ld%ld%ld",&a,&b,&c,&k);
  if(k<=a+b){
    printf("%ld\n",a);
  }
  else{
    printf("%ld\n",a-1*(k-a-b));
  }
  return 0;
}

