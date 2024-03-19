#include <stdio.h>
#include <stdlib.h>

int main(){
  int n,q,i,j,x=0;
  int s[10000],t[500];

  scanf("%d",&n);
  //s = (int *)malloc(sizeof(int)*n);

  for(i=0;i<n;i++){
    scanf("%d",&s[i]);
  }
 
  scanf("%d",&q);
  //t = (int *)malloc(sizeof(int)*q);

  for(i=0;i<q;i++){
    scanf("%d",&t[i]);
  }

  for(i=0;i<n;i++){
    for(j=0;j<q;j++){
      if(s[i] == t[j]) x++;
    }
  }

  printf("%d\n",x);
  
  //free(s);
  //free(t);
  
  return 0;
}