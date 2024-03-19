#include<stdio.h>

int main(void)
{
  int a, b, tasu, hiku, kakeru;

  scanf("%d",&a);
  scanf("%d",&b);

  tasu = a + b;
  hiku = a - b;
  kakeru = a * b;

  if(tasu >= hiku){
    if(tasu >= kakeru){
      printf("%d",tasu);
    }
    else{
      printf("%d",kakeru);
    }
  }
  else{
    if(hiku >= kakeru){
      printf("%d",hiku);
    }
    else{
      printf("%d",kakeru);
    }
  }

  return 0;
  
}
