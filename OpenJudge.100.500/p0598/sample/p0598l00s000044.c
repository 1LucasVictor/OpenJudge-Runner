#include <stdio.h>
int main(){
  int a,b,c;
  scanf("%d%d",&a,&b);
  if(a==b){
    printf("%d\n",a+b);
    return 0;
  }
  c=a;
  while(a<=b){
    a+=c;
    if(a==b){
      printf("%d\n",c+b);
      return 0;
    }
  }
  printf("%d\n",b-c);
  return 0;
}