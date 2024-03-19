#include<stdio.h>
#include<math.h>

int main(void){
  int a;
  scanf("%d\n",&a);

  int ans = a + pow(a,2) + pow(a,3);
  printf("%d\n",ans);

  return 0;
}