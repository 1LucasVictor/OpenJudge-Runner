#include <stdio.h>

int main(){
  int n, q, i, j, x=0;
  scanf("%d", &n);
  int s[n];
  for(i=0;i<n;i++)scanf("%d", &s[i]);
  scanf("%d", &q);
  int t[q];
  for(j=0;j<q;j++)scanf("%d", &t[j]);
  for(i=0;i<n;i++){
    for(j=0;j<q;j++){
      if(s[i]==t[j]) x++;
    }
  }
  printf("%d\n", x);
  return 0;
}

