#include <stdio.h>

int main(void) {
  int a;
  int five,seven;
  five=seven=0;
  for (int i = 0; i < 3; i++)
  {
    scanf("%d", &a);
    if(a==5)five++;
    if(a==7)seven++;
  }
  if(five==2 && seven==1){
    printf("YES\n");
  }else{
    printf("NO\n");
  }
  

  return 0;
}