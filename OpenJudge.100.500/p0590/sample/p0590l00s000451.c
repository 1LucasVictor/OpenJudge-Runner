#include <stdio.h>
int main(void){
  int a,b,c,d,e,k;

  scanf("%d\n%d\n%d\n%d\n%d\n%d",&a,&b,&c,&d,&e,&k);
  if(b-a<=k || c-b<=k || d-c<=k || e-d<=k)
    printf("Yay!");
  else
    printf(":(");
  return 0;
}
