#include<stdio.h>

#define NUM 16
int main(){
  int A,B,l,s;
  scanf("%d%d", &A, &B);
  l = (A>=B)? A: B;
  s = (A< B)? A: B;
  if(l <= NUM/2 && s <= NUM/2) printf("Yay!\n");
  else printf(":(\n");
  
  return 0;
}
