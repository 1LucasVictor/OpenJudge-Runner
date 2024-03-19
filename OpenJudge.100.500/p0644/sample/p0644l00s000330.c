#include<stdio.h>
 
int main(void) {
  int s1, s2, s3, d;
  
  scanf("%1d%1d%1d", &s1, &s2, &s3);
  
  if(s1 == 1) {
    d++;
  }
  if(s3 == 1) {
    d++;
  }
  if(s2 == 1) {
   	d++;
  }
  
  printf("%d", d);
  
  return 0;
}