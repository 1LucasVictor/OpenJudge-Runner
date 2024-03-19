#include<stdio.h>

int main() {
  int n,i,j,x,s=0;

  scanf("%d",&n);

  for(i=0; i<n; i++) {
     scanf("%d",&x);
     if (x==2) {
        s=s+1;
     }
     
     for (j=2; j<x;  j++) {
        if (x%j==0)
           break;
        if (x-1==j)
         s=s+1;
     }
  }
  printf("%d\n",s);

  return 0;
}