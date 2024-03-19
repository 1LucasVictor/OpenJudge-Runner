#include<stdio.h>
#include<string.h>
 
int main() {
 
  int i, j, len, count = 0, m, n;
  char s[201], h[101], t[201];
 
  while(1) {
    scanf("%s",s);
    len = strlen(s);
    if(s[0] == '-') break;
    scanf("%d", &m);
    for(i = 0; i < m; i++) {
      scanf("%d", &n);
      //printf("%s -> ", s);
      for(j = 0; j < len - n; j++) {
    t[j] = s[n+j];
    //printf("(%d, %d) ", j, n+j);
      }
      //printf("\n");
      for(j = 0; j < n; j++) {
    t[len - n + j] = s[j];
    //printf("(%d, %d) ", len-n+j, j);
      }
      //printf("\n");
      for(j = 0; j < len; j++) {
    s[j] = t[j];
      }
    }
 
    for(i = 0; i < len; i++) {
      printf("%c",t[i]);
    }
    printf("\n");
  }      
 
  return 0;
}