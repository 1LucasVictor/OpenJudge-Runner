#include<stdio.h>

char *S[2] = {"Even", "Odd"};
int a, b, c;

int main(){
  scanf("%d%d", &a, &b);
  c = a * b;
  puts(S[c&1]);
}
