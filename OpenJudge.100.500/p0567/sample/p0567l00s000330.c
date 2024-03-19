#include<stdio.h>

int main(){
  int a,b,c,zero=0;
  scanf("%d %d %d",&a,&b,&c);
  if(c<(a-b)){
    printf("%d\n",zero);
  }
  else
    printf("%d\n",c-a+b);
  
  return 0;
}
  
