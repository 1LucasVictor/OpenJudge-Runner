#include <stdio.h>
int main(){
  int i,a,b,c,k;

  scanf("%d%d",&a,&b);

  if(a<b)
    c=a;
  else c=b;
  
  for(i=1;i<=c;i++){
    if(a%i==0 && b%i==0){
      k=i;
    }
  }

  printf("%d\n",k);

  return 0;
}