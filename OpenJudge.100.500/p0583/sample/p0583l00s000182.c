#include <stdio.h>

int main(){
  int n, a, b, c, d;
  scanf("%d%d%d%d%d", &n, &a, &b, &c, &d);

  char s[200005];  scanf("%s", s);

  int triple = 0;
  for(int i=0; i<n-1; i++){
    if(s[i]=='#' && s[i+1]=='#'){
      triple = 1;
      break;
    }
  }
  
  if(!triple && d<c){
    for(int i=b; i<=c-2; i++){
      if(s[i-1]=='.' && s[i]=='.' && s[i+1]=='.')
	break;
      if(i==c-2)  triple = 1;
    }
  }

  if(!triple)  printf("Yes\n");
  else        printf("No\n");

  return 0;
}
      
