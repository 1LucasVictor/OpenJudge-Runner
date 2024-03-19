#include<stdio.h>
int main()
{
  int a, b, c, d, e, n;
  scanf("%d", &a);
  scanf("%d", &b);
  scanf("%d", &c);
  scanf("%d", &d);
  scanf("%d", &e);
  scanf("%d", &n);
  if(e-a<=n){
    printf("Yay!");
  }else{
    printf(":(");
  }
  return 0;
}
