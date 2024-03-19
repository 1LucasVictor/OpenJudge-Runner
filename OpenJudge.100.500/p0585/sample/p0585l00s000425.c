#include <stdio.h>

int main(){
  int a,b,t,i;
  int result = 0;
  scanf("%d %d %d",&a,&b,&t);
  for(i=a;i<t+0.5;i+=a){
    result += b;
  }
  printf("%d\n",result);
  //printf("%d %d %d\n",a,b,t);
  return 0;
}