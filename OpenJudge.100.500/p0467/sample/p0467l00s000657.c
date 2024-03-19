#include<stdio.h>

int main(){
  int a,b,c,k,max;
  scanf("%d%d%d%d",&a,&b,&c,&k);
  if(k==(a+b+c)){
    max = a-c;
  } else if(k<(a+b+c) && k>=(a+b)){
    max = a-(c-k+a+b-1);
  } else{
    max = a;
  }
  printf("%d",max);
  return 0;
}
  
      