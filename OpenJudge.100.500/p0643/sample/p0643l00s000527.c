#include<stdio.h>
int main(){
  int n1, n2, mi;
  scanf("%d %d", &n1, &n2);
  mi = n1 * n2;
  if ( mi % 2 == 0){
    printf("Even");
  } else {
    printf("Odd");
  }
}