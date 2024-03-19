#include<stdio.h>
int return_max(int a,int b){
  if(a>b){
    return a;
  }else{
    return b;
  }
}

int main(void)
{
  int a,b;
  scanf("%d %d",&a,&b);
  printf("%d\n",return_max(a+b,return_max(a-b,a*b)));
  return 0;
}
