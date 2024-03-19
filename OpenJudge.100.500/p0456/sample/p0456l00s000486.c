#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
  int m = 0;
  char s[2000000];
  char t[2000000];
  
  scanf("%s",s);
  scanf("%s",t);
  
  int n = strlen(s);
  
  for(int i=0;i<n;i++){
    if(s[i]!=t[i]){
      m+=1;
    }
  }
  printf("%d\n",m);
  return 0;
}
    