#include <stdio.h>
#include <string.h>
int main(void)
{
  int i,j,k,n,m;
  char t1[201],t2[201];
 
  while(1){
    scanf("%s\n%d", t1, &n);
    if(!strcmp(t1, "-")) break;
    
    for(i=0;i<n;i++){
      scanf("%d", &m);
      for(j=m;t1[j]!='\0';j++)
        t2[j-m] = t1[j];
      for(k=0;k<m;k++)
        t2[j-m+k] = t1[k];
      for(j=0;t1[j]!='\0';j++)
        t1[j] = t2[j];
    }
 
    printf("%s\n", t1);
  }
  return 0;
}
