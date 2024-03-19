#include<stdio.h>
int main ()
{
  int a,e,i,k;
  scanf("%d",&a);
  for(i=0;i<4;i++){
    scanf("%d",&e);
  }
  scanf("%d",&k);
  if(e-a>k){
    puts(":(");
  }else{
    puts("Yay!");
  }
  return 0;
}
