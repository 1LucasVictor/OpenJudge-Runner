#include <stdio.h>
#include <string.h>
 
int main(void){
  char s[1001], order[8], ch[1001];
  int i, j, n, x, y;
 
  scanf("%s\n%d", s, &n);
 
  for(i=0;i<n;i++){
    scanf("%s %d %d", order, &x, &y);
     
    if(!strcmp(order, "reverse")){
      for(j=x;j<=y;j++)
        ch[y-j] = s[j];
      for(j=x;j<=y;j++)
        s[j] = ch[j-x];
    }
 
    if(!strcmp(order, "replace")){
      scanf("%s", ch);
      for(j=0;ch[j]!='\0';j++)
        s[x+j] = ch[j];
    }
 
    if(!strcmp(order, "print")){
      for(j=x;j<=y;j++)
        printf("%c", s[j]);
      printf("\n");
    }
  }
 
  return 0;
}
