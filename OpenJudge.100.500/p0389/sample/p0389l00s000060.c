#include <stdio.h>
#include <string.h>
 
int main(void){
  int i,j,k,n,s;
  char ca[201],can[201];
 
  while(1){
    scanf("%s\n%d", ca, &n);
    if(!strcmp(ca, "-")) break;
    
    for(i=0;i<n;i++){
      scanf("%d", &s);
      for(j=s;ca[j]!='\0';j++)
        can[j-s] = ca[j];
      for(k=0;k<s;k++)
        can[j-s+k] = ca[k];
      
      for(j=0;ca[j]!='\0';j++)
        ca[j] = can[j];
    }
 
    printf("%s\n", ca);
  }
 
  return 0;
}
