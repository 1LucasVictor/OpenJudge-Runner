#include<stdio.h>

int main(){
  int n1, n2, n3;
  
  scanf("%d %d %d", &n1, &n2, &n3);
  if((n1!=5 && n1!=7) || (n2!=5 && n2!=7) || (n3!=5 && n3!=7)) printf("NO\n");
  else if((n1==7 && n2==7) || (n1==7 && n3==7) || (n2==7 && n3==7)) printf("NO\n");
  else printf("YES\n");
  return 0;
}