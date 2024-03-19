#include<stdio.h>

int main(void)
{
  int d,n;
  scanf("%d%d",&d,&n);

  int h=100;

  if(d!=0){
  for(int i=0; i<d-1; i++){
    h *= 100;
  }
  }else{
    printf("%d",n);
    return 0;
  }
    printf("%d",h*n);

  return 0;
}
