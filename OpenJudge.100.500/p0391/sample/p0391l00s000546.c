

#include <stdio.h>
#include <string.h>
 
int main(void){
  char s[1001], order[8], ch[1001];
  int i, j, n, a, b;
 
  scanf("%s\n%d", s, &n);
 
  for(i=0;i<n;i++){
    scanf("%s %d %d", order, &a, &b);
     
    if(!strcmp(order, "reverse")){
      for(j=a;j<=b;j++)
        ch[b-j] = s[j];
      for(j=a;j<=b;j++)
        s[j] = ch[j-a];
    }
 
    if(!strcmp(order, "replace")){
      scanf("%s", ch);
      for(j=0;ch[j]!='\0';j++)
        s[a+j] = ch[j];
    }
 
    if(!strcmp(order, "print")){
      for(j=a;j<=b;j++)
        printf("%c", s[j]);
      printf("\n");
    }
  }
 
  return 0;
}

