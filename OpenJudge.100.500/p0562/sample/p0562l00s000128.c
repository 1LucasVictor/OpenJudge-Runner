#include <stdio.h>

int main(void)
{
  int a,b;
  scanf("%d %d",&a,&b);

  int i=0;
  if(b==1)
    printf("0\n");
  else{
    b-=a;
    i++;
    while(b>0){
      b-=(a-1);
      i++;
    }
    printf("%d\n",i);
  }
  return 0;
}
