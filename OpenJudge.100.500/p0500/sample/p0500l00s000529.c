#include <stdio.h>

int main(void){
  int n,m,i;
  int s[100],c[100];
  int result[10] = {0};
  int setted[10] = {0};
  int error=0;
  
  scanf("%d %d",&n,&m);
  for(i=0;i<m;i++) scanf("%d %d", &s[i],&c[i]);
  
  if(n>=2) result[0] = 1;
  for(i=0;i<m;i++){
    if(setted[s[i]-1]==1 && result[s[i]-1]!=c[i]){
      error=1;
      break;
    }else if(s[i] == 1 && c[i] == 0){
      error=1;
      break;
    }
    result[s[i]-1] = c[i];
    setted[s[i]-1] = 1;
  }
  
  if(error==1) printf("-1");
  else for(i=0;i<n;i++) printf("%d", result[i]);
  
  return 0;
}