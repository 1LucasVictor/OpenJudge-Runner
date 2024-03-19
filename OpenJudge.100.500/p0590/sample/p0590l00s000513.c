#include<stdio.h>

int main(){
  
  int a, b, c, d, e, k;
  
  if(scanf("%d", &a)==0) return -1;
  if(scanf("%d", &b)==0) return -1;
  if(scanf("%d", &c)==0) return -1;
  if(scanf("%d", &d)==0) return -1;
  if(scanf("%d", &e)==0) return -1;
  if(scanf("%d", &k)==0) return -1;
  
  if(e-a<=k) printf("Yay!");
  else printf(":(");
  
  return 0;
}