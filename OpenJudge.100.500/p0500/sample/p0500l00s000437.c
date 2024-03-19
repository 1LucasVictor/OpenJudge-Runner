#include <malloc.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//ABC157C
int main(void) {
  int n, m, k, i;
  scanf(" %d %d", &n, &m);
  int s[m], c[m], num[n];
  for(i=0; i<m; i++)
    scanf(" %d %d", &s[i], &c[i]);
  for(i=0; i<n; i++)
    num[i]=-1;

  for(i=0; i<m; i++){
    if(num[s[i]-1]==-1)
      num[s[i]-1]=c[i];
    else if(num[s[i]-1]!=c[i]){
      printf("-1");
      return 0;
    }
  }

  if(num[0]==0&&n>1){
    printf("-1");
    return 0;
  }else if(num[0]==0&&n==1){
    printf("0");
    return 0;
  }

  for(i=0; i<n; i++){
    if(num[i]==-1&&i==0) printf("1");
    else if(num[i]>=0) printf("%d", num[i]);
    else printf("0");
  }
  return 0;

}