#include <stdio.h>
#include <ctype.h>

int main() {

  char ch[1200];
  int i,n;
  n=0;
  char a[1200];

  while(1) {
    scanf("%c",&a[n]);
    if(a[n] == '\n') {
      break;
    }
    ch[n] = a[n];
    if('A' <= a[n] && a[n] <= 'Z') {
      ch[n] = a[n] + 32;
    } else if(a[n] >= 'a' && a[n] <= 'z') {
      ch[n] = a[n] - 32;

    }
    
    
    n = n +1;
    
  }
  
  for(i=0; i<n ; i++) {
    printf("%c" ,ch[i]);
  }
  printf("\n"); 
  return 0;
  
}