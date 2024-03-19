#include<stdio.h>
int main(int argc, char const *argv[]) {
  int a, b, t, g;
  scanf("%d %d %d\n", &a, &b, &t );
  g = (t/a)*b;
  printf("%d\n",g);
  return 0;
}