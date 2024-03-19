#include<stdio.h>
int main(){
  long int i,a,b,len,ta,tb;
  scanf("%ld %ld",&a,&b);
  len = (a>b) ? a : b;
  for(i=0;i<len;i++){
    ta = (a-i>0) ? a-i : i-a;
    tb = (b-i>0) ? b-i : i-b;
    if(ta==tb){
      printf("%ld\n",i);
      return 0;
    }
  }
  printf("IMPOSSIBLE\n");
  return 0;
}