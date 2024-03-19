#include<stdio.h>
int main(void)
{
  int a,b,max,min;
  scanf("%d %d",&a,&b);
  if(a>b) {
    max=a;
    min=b;
  }else{
    max=b;
    min=a;
  }

  if(max-min<=16-max-min){
    puts("Yay!");
  }else{
    puts(":(");
  }

  return 0;
}