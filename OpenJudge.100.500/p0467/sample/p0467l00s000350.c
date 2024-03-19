#include<stdio.h>

int main(){
  int a,b,c,k,max;
  scanf("%d%d%d%d",&a,&b,&c,&k);
  if(k==(a+b+c)){
    max = a-c;
  } else if(k<(a+b+c) && k>=(a+b)){
    max = a-(k-a-b);
  } else if(k<(a+b) && k>=a){
    max = a;
  } else{
    max = k;
  }
  printf("%d",max);
  return 0;
}
  